#include<stdio.h>
int main(){
    int i,a[2500],max=0,n,sum=0,start,end,check,cstart;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(sum+a[i]>0){
            sum+=a[i];
            if(check==1){
                check=0;
                cstart=i;
            }
            if(sum>max){
                max=sum;
                start=cstart;
                end=i;
            }
        }
        else{
            sum=0;
            check=1;
        }
    }
    if(!max) printf("Empty sequence");
    else{
        for(i=start;i<=end;i++)
            printf("%d ",a[i]);
        printf("\n%d",max);
    }
    return 0;
}
