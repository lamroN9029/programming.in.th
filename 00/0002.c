#include<stdio.h>
int main(){
    int n,max=-2000000000,min=2000000000,t;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&t);
        if(t>max)
            max=t;
        if(t<min)
            min=t;
    }
    printf("%d\n%d",min,max);
    return 0;
}
