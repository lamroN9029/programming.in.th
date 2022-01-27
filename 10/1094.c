#include<stdio.h>
int main(){
    int i,j,a[5],tmp,cnt;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    while(1){
        for(i=0;i<4;i++)
            if(a[i]>a[i+1]){
                tmp=a[i];
                a[i]=a[i+1];
                a[i+1]=tmp;
                for(j=0;j<5;j++)
                    printf("%d ",a[j]);
                printf("\n");
            }
        for(i=0,cnt=0;i<5;i++)
            if(a[i]==i+1)
                cnt++;
        if(cnt==5) break;
    }
    return 0;
}
