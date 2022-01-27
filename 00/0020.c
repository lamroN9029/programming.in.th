#include<stdio.h>
int main()
{
    int b,c,d,e,a[5],max=0,num;
    for(int i=0;i<5;i++)
    {
        scanf("%d %d %d %d",&b,&c,&d,&e);
        a[i]=b+c+d+e;
        if(a[i]>max)
        {
            max=a[i];
            num=i;
        }
    }
    printf("%d %d",num+1,max);
}
