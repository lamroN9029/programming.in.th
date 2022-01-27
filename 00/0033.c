#include<stdio.h>
int main(){
    int i,n,b[10000]={0},max=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        b[a[i]]++;
    }
    for(i=0;i<n;i++)
        if(b[a[i]]>max)
            max=b[a[i]];
    for(i=0;i<10000;i++)
        if(max==b[i])
            printf("%d ",i);
    return 0;
}
