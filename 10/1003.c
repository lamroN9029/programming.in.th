#include<stdio.h>
int nugget(int n){
    int i,j,k;
    for(i=0;i<=16;i++)
        for(j=0;j<=11;j++)
            for(k=0;k<=5;k++)
                if(n-6*i-9*j-20*k==0)
                    return n;
    return 0;
}
int main(){
    int i,n;
    scanf("%d",&n);
    if(n<6)
        printf("no");
    else
        for(i=6;i<=n;i++)
            if(nugget(i)!=0)
                printf("%d\n",nugget(i));
    return 0;
}
