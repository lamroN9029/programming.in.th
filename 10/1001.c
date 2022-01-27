#include<stdio.h>
int main(){
    int i,j,k,n,m,x;
    char c[21][21];
    scanf("%d%d",&n,&m);
    int a[m];
    for(i=0;i<n;i++)
        scanf("%s",c[i]);
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            if(c[0][j]=='O') continue;
            if(c[i][j]=='O'){
                x=i;
                while(a[j]){
                    c[x-1][j]='#';
                    a[j]--;
                    x--;
                }
            }
            if(i==n-1&&a[j]){
                x=i;
                while(a[j]){
                    c[x][j]='#';
                    a[j]--;
                    x--;
                }
            }
        }
    for(i=0;i<n;i++)
        printf("%s\n",c[i]);
    return 0;
}
