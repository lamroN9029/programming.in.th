#include<stdio.h>
#include<math.h>
int main(){
    int c,l,k,n,m,i,j;
    double sum=0;
    scanf("%d %d",&n,&m);
    int temp;
    scanf("%d %d",&l,&k);
    scanf("%d",&c);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            scanf("%d",&temp);
            sum+=temp;
        }
    printf("%.0f",ceil(sum/c+l*k));
}
