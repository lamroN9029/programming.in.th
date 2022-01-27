#include<stdio.h>
int gcd(int a,int b){
    if(a%b)
        gcd(b,a%b);
    else return b;
}
unsigned long lcm(unsigned long a,unsigned long b){
    return a*b/gcd(a,b);
}
int main(){
    int n;
    unsigned long number[2];
    scanf("%d",&n);
    scanf("%lu",&number[0]);
    for(int i=0;i<n-1;i++){
        scanf("%lu",&number[1]);
        number[0]=lcm(number[0],number[1]);
    }
    printf("%lu",number[0]);
    return 0;
}
