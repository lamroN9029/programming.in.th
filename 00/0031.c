#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",(int)log2(a)+(int)log2(b)+(int)(log2(c)));
    return 0;
}

