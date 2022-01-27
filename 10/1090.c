#include<stdio.h>
int main(){
    int i,n,a,temp;
    long count=0;
    long arr[200001]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&temp);
        arr[temp]++;
    }
    scanf("%d",&a);
    temp=a+1;
    for(i=0;i<temp/2;i++)
        count+=arr[i]*arr[a-i];
    printf("%ld",a%2? count:count+arr[a/2]*(arr[a/2]-1)/2);
    return 0;
}

