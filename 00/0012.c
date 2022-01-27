#include<stdio.h>
#include<string.h>
int line1(char *s){
    for(int i=0;s[i];i++){
        if(i==0)
            printf("..#..");
        else if((i+1)%3==0)
            printf(".*..");
        else printf(".#..");
    }
    return 0;
}
int line2(char *s){
    printf(".");
    for(int i=0;s[i];i++){
        if((i+1)%3==0)
            printf("*.*.");
        else printf("#.#.");
    }printf("\n");
    return 0;
}
int main(){
    int i;
    char s[16];
    scanf("%s",s);
    line1(s);
    printf("\n");
    line2(s);
    printf("#");
    for(i=0;s[i];i++){
        if((i+1)%3==1)
            printf(".%c.#",s[i]);
        else{
            if(i==strlen(s)-1&&(strlen(s)+1)%3==0)
                printf(".%c.#",s[i]);
            else
                printf(".%c.*",s[i]);
        }
    }
    printf("\n");
    line2(s);
    line1(s);
    return 0;
}
