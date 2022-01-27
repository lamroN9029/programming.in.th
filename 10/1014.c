#include<stdio.h>
int main(){
    int i,j,w,h,n,x,d,f0=0,f50=0,a[3000]={0};
    scanf("%d%d%d",&w,&h,&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&d);
        for(j=x;j<x+d&&j<w;j++)
            a[j]++;
    }
    /*for(i=0;i<w;i++)
        printf("%d ",a[i]);*/
    for(i=0;i<w;i++){
        if(a[i]==0)
            f0++;
        else if(a[i]==1)
            f50++;
    }
    printf("%d %d",f0*h,f50*h);
    return 0;
}
