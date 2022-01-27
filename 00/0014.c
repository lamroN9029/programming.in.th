#include<stdio.h>
int gcd(int x,int y)
{
    if(y%x) gcd(y%x,x);
    else return x;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",gcd(b,a));
    return 0;
}
