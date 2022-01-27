#include<stdio.h>
#include<math.h>
int n,a[10],b[10],min=1000000000;
void com(int i,int mul,int sum){
    if(i==n){
        if(sum>0&&fabs(mul-sum)<min) min=fabs(mul-sum);
    }
    else{
        com(i+1,mul,sum);
        com(i+1,mul*a[i],sum+b[i]);
    }
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d%d",&a[i],&b[i]);
    com(0,1,0);
    printf("%d",min);
    return 0;
}
