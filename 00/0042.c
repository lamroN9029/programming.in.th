#include <stdio.h>
int main()
{
    int a,n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        long double ans=1.0;
        while(a--)
            ans*=2.0;
        printf("%.0Lf\n",ans);
    }
}
