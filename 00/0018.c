#include<stdio.h>
int main(){
    int n,k,j,m,l,x,i=0,a[1000];
    scanf("%d %d",&n,&k);
    for(j=2,l=1;j*l<=n;l++,i++)
        a[i]=j*l;
    while(i<k){
        for(j=3;j<=n;j+=2){
            for(l=1;j*l<=n;l++){
                for(m=0,x=0;m<=i;m++){
                    if(j*l==a[m]){
                        x++;
                        break;
                    }
                }
                if(x==0){
                    a[i]=j*l;
                    i++;
                }
            }
        }
    }
    printf("%d",a[k-1]);
    return 0;
}
