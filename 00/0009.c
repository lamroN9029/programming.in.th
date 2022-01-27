#include<stdio.h>
int main(){
    int a[3],i,j,temp;
    char t;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(i=0;i<4;i++){
        scanf("%c",&t);
        if(t=='A')
            printf("%d ",a[0]);
        else if(t=='B')
            printf("%d ",a[1]);
        else if(t=='C')
            printf("%d ",a[2]);
    }
    return 0;
}
