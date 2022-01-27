#include<stdio.h>
int main(){
    int n,k,x=0,y=0,ch=1;
    char cmd[3],drt='E';
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s %d",cmd,&k);
        if(cmd[0]=='L'){
            if(drt=='E'){
                drt='N';
                y+=k;
            }else if(drt=='N'){
                drt='W';
                x-=k;
            }else if(drt=='W'){
                drt='S';
                y-=k;
            }else if(drt=='S'){
                drt='E';
                x+=k;
            }
        }else if(cmd[0]=='R'){
            if(drt=='E'){
                drt='S';
                y-=k;
            }else if(drt=='N'){
                drt='E';
                x+=k;
            }else if(drt=='W'){
                drt='N';
                y+=k;
            }else if(drt=='S'){
                drt='W';
                x-=k;
            }
        }else if(cmd[0]=='B'){
            if(drt=='E'){
                drt='W';
                x-=k;
            }else if(drt=='N'){
                drt='S';
                y-=k;
            }else if(drt=='W'){
                drt='E';
                x+=k;
            }else if(drt=='S'){
                drt='N';
                y+=k;
            }
        }else if(cmd[0]=='F'){
            if(drt=='E')
                x+=k;
            else if(drt=='N')
                y+=k;
            else if(drt=='W')
                x-=k;
            else if(drt=='S')
                y-=k;
        }
        if(x<=-50000||x>=50000||y<=-50000||y>=50000){
            ch=0;
            break;
        }
    }
    if(ch==0)
        printf("DEAD");
    else
        printf("%d %d\n%c",x,y,drt);
    return 0;
}
