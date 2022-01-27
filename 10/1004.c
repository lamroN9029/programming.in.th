#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int room;
    int id;
    struct node *next;
}NODE;
void insort(NODE **head,int x,int y){
    NODE *addnode,*tmp;
    addnode=(NODE *)malloc(sizeof(NODE));
    addnode->room=x;
    addnode->id=y;
    addnode->next=NULL;
    tmp=*head;
    while(tmp->next!=NULL){
        if(tmp->room==addnode->room)
            break;
        tmp=tmp->next;
    }
    while(tmp->next!=NULL&&addnode->room==tmp->next->room)
        tmp=tmp->next;
    addnode->next=tmp->next;
    tmp->next=addnode;

}
void pushback(NODE **head,int x,int y){
    NODE *addnode,*tmp;
    addnode=(NODE *)malloc(sizeof(NODE));
    addnode->room=x;
    addnode->id=y;
    addnode->next=NULL;
    if(*head==NULL){
        *head=addnode;
    }
    else{
        tmp=*head;
        while(tmp->next!=NULL)
            tmp=tmp->next;
        tmp->next=addnode;
    }
}
int search(NODE *head,int x){
    while(head!=NULL){
        if(head->room==x)
            return 1;
        head=head->next;
    }
    return 0;
}
/*void printlist(NODE *head){
    printf("\n=list=\n");
    while(head!=NULL){
        printf("%d %d\n",head->room,head->id);
        head=head->next;
    }
    printf("\n");
}*/
void printhead(struct node **head){
    if(*head==NULL)
        printf("empty\n");
    else{
        struct node *tmp=*head;
        printf("%d\n",(*head)->id);
        tmp=(*head)->next;
        (*head)=tmp;
    }
}
int main(){
    NODE *head=NULL;
    int a[10001]={0};
    int nc,ns,c,s,number;
    char cmd;
    scanf("%d%d",&nc,&ns);
    for(int i=0;i<ns;i++){
        scanf("%d%d",&c,&s);
        a[s]=c;
    }
    while(1){
        scanf(" %c",&cmd);
        if(cmd=='X') break;
        else if(cmd=='E'){
            scanf("%d",&number);
            if(a[number]){
                if(search(head,a[number])==1){
                    //printf("searh = %d",search(head,a[number]));
                    insort(&head,a[number],number);
                }
                else
                    pushback(&head,a[number],number);
                //printlist(head);
            }
        }
        else if(cmd=='D'){
            printhead(&head);
            //printlist(head);
        }
    }
    printf("0");
}
