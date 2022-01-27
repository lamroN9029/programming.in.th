#include<stdio.h>
int main(){
    while(1){
        int i,n,w,s,count,t;
        scanf("%d",&n);
        if(n==-1)
            break;
        for(i=0,w=1,s=0,count=0;i<n;i++){
            t=w;
            w+=s+1;
            s=t;
            count=w+s+1;
        }
        printf("%d %d\n",w,count);
    }
    return 0;
}
