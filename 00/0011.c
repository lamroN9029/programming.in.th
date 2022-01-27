#include<stdio.h>
int main()
{
    int i,j,count=0,a[42],n[10];
    for(i=0;i<42;i++)
        a[i]=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&n[i]);
        a[n[i]%42]++;
    }
    for(i=0;i<42;i++)
        if(a[i])
            count++;
    printf("%d",count);
}

