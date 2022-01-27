#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
    int len,index=2;
    int i,j;
    char str[201],category;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
        str[i]=tolower(str[i]);
    for(i=0;i<len/4;i++)
        if(str[i]!=str[len/2-i-1])
            index=1;
    for(i=0;i<len/2;i++)
        if(str[i]!=str[len-i-1])
            index=0;
    printf("%s",index==2? "Double Palindrome":index==1? "Palindrome":"No");
    return 0;
}
