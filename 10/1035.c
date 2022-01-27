#include<stdio.h>
#include<math.h>
#include<string.h>
int prime(int n){
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return 0;
    return 1;
}
int palindrome(int n){
    char buffer[8];
    int i;
    int digit=log10(n)+1;
    //printf("%d\n",digit);
    for(i=0;i<digit;i++){
        buffer[digit-i-1]=n%10+'0';
        n=n/10;
    }
    buffer[i]='\0';
    //printf("%s\n",buffer);
    for(int i=0;i<digit/2;i++)
        if(buffer[i]!=buffer[digit-i-1])
            return 0;
    return 1;
}
int main(){
    int i;
    int n=0;
    char str[8];
    scanf("%s",str);
    int len=strlen(str);
    for(i=0;i<len;i++)
        n+=(str[i]-'0')*pow(10,len-i-1);
    //printf("%d",n);
    for(i=n;;i++)
        if(prime(i)&&palindrome(i)){
            printf("%d",i);
            return 0;
        }
}
