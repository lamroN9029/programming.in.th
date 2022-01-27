#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,t;
    char c[1002];
    scanf("%d",&n);
    while(n--){
        scanf("%s",c);
        if((c[strlen(c)-1]-'0')%2||c[0]-'0'==2&&c[1]=='\0') printf("T");
        else printf("F");
        printf("\n");
    }
    return 0;
}
