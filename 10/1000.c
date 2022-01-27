#include<stdio.h>
#include<string.h>
#define SIZE 1001
int main(){
    int i,j,m,n,count,check;
    scanf("%d%d",&n,&m);
    char word1[SIZE],word2[SIZE];
    scanf("%s",word1);
    for(i=1;i<m;i++){
        scanf("%s",word2);
        count=0;
        for(j=0;j<n;j++)
            if(word1[j]!=word2[j])
                count++;
        if(count<=2)
            strcpy(word1,word2);
        else break;
    }
    printf("%s",word1);
    return 0;
}
