#include<stdio.h>
#include<math.h>
int main(){
    int n,t,count[5]={0};
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<5;j++){
            scanf("%d",&t);
            count[j]+=t;
        }
    /*for(int i=0;i<5;i++)
        printf("%d ",count[i]);*/
    printf("%.0f",ceil(count[0]+count[1]*0.75+count[2]*0.5+count[3]*0.25+count[4]*0.125));
    return 0;
}
