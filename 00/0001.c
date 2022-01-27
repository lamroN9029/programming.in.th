#include<stdio.h>
int main(){
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    t=a+b+c;
    if(t<50) printf("F");
    else if(t<55) printf("D");
    else if(t<60) printf("D+");
    else if(t<65) printf("C");
    else if(t<70) printf("C+");
    else if(t<75) printf("B");
    else if(t<80) printf("B+");
    else printf("A");
    return 0;
}
