#include<stdio.h>
#include<ctype.h>
#include<string.h>
char a[25][25],str[100][15+1];
int checkerNW(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x--][y--]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checkerNE(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x--][y++]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checkerSW(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x++][y--]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checkerSE(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x++][y++]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checkerN(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x--][y]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checkerS(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x++][y]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checkerW(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x][y--]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checkerE(int x,int y,int n){
    int i,c;
    for(i=0,c=0;i<strlen(str[n]);i++)
        if(a[x][y++]==str[n][i]) c++;
        else break;
    if(c!=strlen(str[n])) return 0;
    return 1;
}
int checker(int j,int k,int i){
    if(checkerNW(j,k,i)||checkerNE(j,k,i)||checkerSW(j,k,i)||checkerSE(j,k,i)||
       checkerN(j,k,i)||checkerW(j,k,i)||checkerS(j,k,i)||checkerE(j,k,i))
        return 1;
    return 0;
}
int main(){
    int i,j,k,m,n,s,check,ans[100][2];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        scanf("%s",a[i]);
        for(j=0;j<n;j++)
            a[i][j]=tolower(a[i][j]);
    }
    scanf("%d",&s);
    for(i=0;i<s;i++){
        scanf("%s",str[i]);
        for(j=0;j<str[i][j];j++)
            str[i][j]=tolower(str[i][j]);
    }
    for(i=0;i<s;i++){
        check=0;
        for(j=0;j<m;j++){
            for(k=0;k<n;k++)
                if(checker(j,k,i)){
                    ans[i][0]=j,ans[i][1]=k;
                    check=1;
                    break;
                }
            if(check==1)
                break;
        }
    }
    for(i=0;i<s;i++){
        for(j=0;j<2;j++)
            printf("%d ",ans[i][j]);
        printf("\n");
    }
    return 0;
}

