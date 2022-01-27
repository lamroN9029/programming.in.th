#include<stdio.h>
#include<math.h>
int main(){
    int i,j,k,n;
    scanf("%d",&n);
    double ans=0,temp;
    int x[100],y[100];
    for(i=0;i<n;i++)
        scanf("%d %d",&x[i],&y[i]);
    for(i=0;i<n;i++)
        for(j=0;(j!=i)&&(j<n);j++)
            for(k=0;(k!=i)&&(k!=j)&&(k<n);k++){
                temp=fabs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i])/2;
                if(temp>ans)
                    ans=temp;
            }
    printf("%.3lf",ans);
    return 0;
}
