#include<stdio.h>
int main(){
    int n,i,j,temp,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++)
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
    for(i=0;a[i]==0;i++)
            count++;
    if(a[0]==0){
        a[0]=a[count];
        a[count]=0;
    }
    for(i=0;i<n;i++)
        printf("%d",a[i]);
}
