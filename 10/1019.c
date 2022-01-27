#include<stdio.h>
#include<string.h>
char str[2][201];
int check(int i,int j,int cnt){
    if(str[0][i]==str[1][j]&&str[0][i]!='\0'&&str[1][j]!='\0'){
        cnt++;
        check(i+1,j+1,cnt);
    }
    else return cnt;
}
int main(){
    char buffer[201];
    int i,j,tmp,start,len1,len2,max=0;
    for(i=0;i<2;i++)
        scanf("%s",str[i]);
    len1=strlen(str[0]);
    len2=strlen(str[1]);
    /*printf("len1 = %d\n"
           "len2 = %d\n",len1,len2);*/
    for(i=0;i<len1;i++)
        for(j=0;j<len2;j++){
            tmp=check(i,j,0);
            if(tmp>max){
                start=i;
                max=tmp;
            }
        }
    for(i=start,j=0;i<start+max;i++,j++){
        buffer[j]=str[0][i];
    }
    buffer[j]='\0';
    printf("%s",buffer);
    return 0;
}

