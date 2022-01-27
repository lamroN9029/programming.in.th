#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n==1)
        printf("2.000000");
    else if(n==3)
        printf("3.732051");
    else{
        if(n%2)
            printf("%d.464102",n);
        else
            printf("%d.000000",n);
    }
    return 0;
}

