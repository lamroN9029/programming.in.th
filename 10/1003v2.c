#include<stdio.h>
int main(){
    int i,n;
    scanf("%d",&n);
    if(n<6)
        printf("no");
    else
        for(i=6;i<=n;i++){
            if(i==7||i==8||i==10||i==11||i==13||i==14||i==16||i==17||i==19||i==22||i==23||i==25||i==28||i==31||i==34||i==37||i==43) continue;
            printf("%d\n",i);
        }
    return 0;
}
