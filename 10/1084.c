#include<stdio.h>
int main(){
    int x,y,k,temp;
    long long sum=0;
    scanf("%d%d%d",&x,&y,&k);
    while(x<=y){
        temp=x;
        while(x>=5){
            x=x/5;
            sum+=x;
        }
        x=temp;
        x++;
    }
    printf("%lld",sum%k);
    return 0;
}
