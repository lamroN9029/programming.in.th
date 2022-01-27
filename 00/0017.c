#include<stdio.h>
int main()
{
    int a[4],temp;
    scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    printf("%d",a[0]*a[2]);
    return 0;
}
