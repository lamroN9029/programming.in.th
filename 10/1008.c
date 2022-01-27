#include<stdio.h>
int main(){
    int a[255][255]={0},b[255];
    int i,j,k,n,l,h,r;
    int mxh=0,mxr=0,mnl=255;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d%d",&l,&h,&r);
        for(j=l;j<r;j++)
            for(k=0;k<h;k++)
                a[j-1][k]=1;
        if(h>mxh)
            mxh=h;
        if(r>mxr)
            mxr=r;
        if(l<mnl)
            mnl=l;
    }
    /*for(i=0;i<mxr-1;i++){
        for(j=0;j<mxh;j++)
            printf("%d",a[i][j]);
        printf("\n");
    }*/
    for(i=0;i<mxr-1;i++){
        j=0;
        while(j<mxh&&a[i][j])
            j++;
        b[i]=j;
    }
    /*for(i=0;i<mxr;i++)
        printf("%d ",b[i]);*/
    for(i=mnl-1;i<mxr;i++){
        printf("%d ",i+1);
        while(b[i]==b[i+1])
            i++;
        printf("%d ",b[i]);
    }
    printf("\n");
    return 0;
}
