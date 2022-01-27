#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
        printf("2");
    else printf("%d",(a+b-1)/a);
    return 0;
}
