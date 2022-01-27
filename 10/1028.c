#include<stdio.h>
int main(){
    int number,a[26]={0};
    char cmd,ch[2];
    while(1){
        scanf(" %c",&cmd);
        if(cmd=='!') break;
        else if(cmd=='='){
            scanf(" %c %d",&ch[0],&number);
            a[ch[0]-'A']=number;
        }
        else if(cmd=='+'){
            scanf(" %c %c",&ch[0],&ch[1]);
            a[ch[0]-'A']+=a[ch[1]-'A'];
        }
        else if(cmd=='-'){
            scanf(" %c %c",&ch[0],&ch[1]);
            a[ch[0]-'A']-=a[ch[1]-'A'];
        }
        else if(cmd=='*'){
            scanf(" %c %c",&ch[0],&ch[1]);
            a[ch[0]-'A']*=a[ch[1]-'A'];
        }
        else if(cmd=='/'){
            scanf(" %c %c",&ch[0],&ch[1]);
            a[ch[0]-'A']/=a[ch[1]-'A'];
        }
        else{
            scanf(" %c",&ch[0]);
            printf("%d\n",a[ch[0]-'A']);
        }
    }
    printf("!");
    return 0;
}
