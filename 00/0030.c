#include<stdio.h>
#include<string.h>
int main(){
    int i,sum1,sum2,sum3,sum11;
        sum1=sum2=sum3=sum11=0;
    char c[1000002];
    gets(c);
    for(i=0;c[i];i++){
        sum3+=c[i]-'0';
        if((i+1)%2) sum1+=c[i]-'0';
        else  sum2+=c[i]-'0';
    }
    if(strlen(c)%2) sum11=sum1-sum2;
    else sum11=sum2-sum1;
    if(sum11<0)
        printf("%d %d",sum3%3,sum11%11+11);
    else
        printf("%d %d",sum3%3,sum11%11);
    return 0;
}
