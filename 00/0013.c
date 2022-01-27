#include<stdio.h>
int main()
{
    int a[9],sum=0,i,j;
    for(i=0;i<9;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    for(i=0;i<9;i++)
        for(j=0;j!=i&&j<9;j++)
            if(sum-a[i]-a[j]==100)
                a[i]=a[j]=0;
    for(i=0;i<9;i++)
        if(!a[i])
            continue;
        else printf("%d\n",a[i]);
    return 0;
}
