#include<stdio.h>
int main()
{
    int i;
    char text[101];
    gets(text);
    for(i=0;text[i];i++)
        if((text[i]=='a'&&text[i+2]=='a')
         ||(text[i]=='e'&&text[i+2]=='e')
         ||(text[i]=='i'&&text[i+2]=='i')
         ||(text[i]=='o'&&text[i+2]=='o')
         ||(text[i]=='u'&&text[i+2]=='u'))
        {
            text[i+1]='0';
            text[i+2]='0';
        }
    for(i=0;text[i];i++)
        if(text[i]!='0')
           printf("%c",text[i]);
    return 0;
}
