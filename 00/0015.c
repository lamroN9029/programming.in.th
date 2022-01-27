#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((c-b)>(b-a))
        printf("%d",c-b-1);
    else
        printf("%d",b-a-1);
    return 0;
}
