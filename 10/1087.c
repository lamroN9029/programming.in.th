#include<stdio.h>
int a[900][900]={0};
int main(){
    int i,j,l,r,c,k,tmp,max=-1500000;
    scanf("%d%d%d",&r,&c,&k);
    for(i=0;i<r;++i)
        for(j=0;j<c;++j)
            scanf("%d",&a[300+i][300+j]);
    for(i=300;i<300+r;++i)
        for(j=300;j<300+c;++j){
            tmp=a[i][j];
            for(l=1;l<=k;++l){
                if(l%2)
                    tmp-=a[i-l][j]+a[i+l][j]+a[i][j-l]+a[i][j+l];
                else
                    tmp+=a[i-l][j]+a[i+l][j]+a[i][j-l]+a[i][j+l];
            }
            if(tmp>max)
                max=tmp;
        }
    printf("%d",max);
    return 0;
}
