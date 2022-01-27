#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,a,n;
    scanf("%d",&n);
    if(n<2)
        printf("*");
    else{
        if(n%2)
            a=n+1;
        else a=n;
        for(i=0;i<n/2;i++)
        {
            for(j=1;j<a;j++)
            {
                if(fabs(a/2-j)==i)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
        if(n%2)
        {
            printf("*");
            for(j=0;j<n-2;j++)
                printf("-");
            printf("*\n");
        }
        for(i=n/2-1;i>-1;i--)
        {
            for(j=a-1;j>0;j--)
            {
                if(fabs(a/2-j)==i)
                    printf("*");
                else
                    printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}
