#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n,len;
    char buffer[100001];
    char ch;
    scanf("%d",&n);
    j=0;
    scanf(" %c",&buffer[0]);
    for(i=0;i<n-1;i++){
        scanf(" %c",&ch);
        if(buffer[j]!=ch){
            buffer[j+1]=ch;
            j++;
        }else j--;
    }
    buffer[j+1]='\0';
    if(j+1==0)
        printf("0\nempty");
    else{
        printf("%d\n",j+1);
        for(i=j;i>=0;i--)
            printf("%c",buffer[i]);
    }
    return 0;
}










/*char *strrevt(char *s)  {
    int i=0,n=strlen(s);
    while (i<n/2)  {
        *(s+n)=*(s+i);
        *(s+i)=*(s+n-i-1);
        *(s+n-i-1)=*(s+n);
        i++;
    }
    *(s+n) = '\0';
    return s;
}
int main(){
    int i,j,n,cnt=0,before,after;
    char ch[100001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf(" %c",&ch[i]);
    while(before!=after){
        before=strlen(ch);
        for(i=0;i<before;i++)
            if(ch[i]==ch[i+1]){
                ch[i]=ch[i+2];
                ch[i+1]=ch[i+3];
                ch[i+2]='\0';
                break;
            }
        after=strlen(ch);
    }
    if(after==0)
        printf("0\nempty");
    else
        printf("%d\n%s",after,strrevt(ch));
    return 0;
}
*/
