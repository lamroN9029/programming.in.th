#include<stdio.h>
#include<string.h>
int main(){
    int i,j,n;
    char c[1000][31],t[31];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",c[i]);
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1;j++){
            if(strcmp(c[j],c[j+1])==0)
                strcpy(c[j+1],"0");
            if(strcmp(c[j],c[j+1])>0){
                strcpy(t,c[j]);
                strcpy(c[j],c[j+1]);
                strcpy(c[j+1],t);
            }
        }
    for(i=0;i<n;i++){
        if(strcmp(c[i],"0")!=0)
            printf("%s\n",c[i]);
    }
    return 0;
}
