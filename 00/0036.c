#include<stdio.h>
double factorial(int n){
    if(n==0) return 1;
    else return n*factorial(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    if(n%2)
        n++;
    printf("%.0lf",factorial(n)/factorial(n/2)/factorial(n/2));
    return 0;
}
