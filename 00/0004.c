#include<stdio.h>
#include<ctype.h>
int main(){
    int i,countL,countU;
        countL=countU=0;
    char s[10001];
    scanf("%s",s);
    for(i=0;s[i];i++){
        if(islower(s[i])!=0)
            countL++;
        else countU++;
    }
    if(countU==0)
        printf("All Small Letter");
    else if(countL==0)
        printf("All Capital Letter");
    else printf("Mix");
    return 0;
}
