#include<stdio.h>
int main(){
    int i,counta,countb;
        counta=countb=0;
    char a[101],b[101],ch;
    scanf("%s",a);
    scanf(" %c",&ch);
    scanf("%s",b);
    for(i=0;a[i];i++)
        if(a[i]=='0')
            counta++;
    for(i=0;b[i];i++)
        if(b[i]=='0')
            countb++;
    if(ch=='*')
    {
        if(a[0]=='0'||b[0]=='0')
            printf("0");
        else
        {
            printf("1");
            for(i=0;i<counta+countb;i++)
                printf("0");
        }

    }
    else
    {
        if(a[0]=='0')
            for(i=0;b[i];i++)
                printf("%c",b[i]);
        else if(b[0]=='0')
            for(i=0;a[i];i++)
                printf("%c",a[i]);
        else if(counta>countb){
            a[counta-countb]='1';
            for(i=0;a[i];i++)
                printf("%c",a[i]);
        }
        else if(countb>counta){
            b[countb-counta]='1';
            for(i=0;b[i];i++)
                printf("%c",b[i]);
        }
        else{
            a[0]='2';
            for(i=0;a[i];i++)
                printf("%c",a[i]);
        }

    }
    return 0;
}
