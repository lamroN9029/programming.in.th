#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *newnode(int newdata){
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=newdata;
    newnode->next=NULL;
    return newnode;
};
void sortinsert(struct node **head,struct node *newnode){
    struct node *current;
    if((*head)==NULL||(*head)->data<newnode->data){
        newnode->next=*head;
        *head=newnode;
    }
    else{
        current=*head;
        while(current->next!=NULL&&current->next->data>=newnode->data)
            current=current->next;
        newnode->next=current->next;
        current->next=newnode;
    }
}
void delhead(struct node **head){
    if(*head==NULL)
        printf("-1\n");
    else{
        printf("%d\n",(*head)->data);
        struct node *tmp;
        tmp=(*head)->next;
        (*head)=tmp;
    }
}
int main(){
    int i,n,value;
    char cmd;
    struct node *head=NULL;
    struct node *new_node;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf(" %c",&cmd);
        if(cmd=='P'){
            scanf("%d",&value);
            new_node=newnode(value);
            sortinsert(&head,new_node);
        }
        else{
            delhead(&head);
        }
    }
    return 0;
}
