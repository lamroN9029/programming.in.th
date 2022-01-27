#include<stdio.h>
int a[1001][1001]={0};
int bomb(int x,int y,int r){
    int i,j,count=0;
    for(i=x-r;i<=x+r;i++)
        for(j=y-r;j<=y+r;j++)
            if(i>=0&&i<=1000&&j>=0&&j<=1000&&a[i][j]==1){
                a[i][j]=0;
                count++;
            }
    return count;
}
/*void printmap(){
    for(int i=0;i<=10;i++){
        for(int j=0;j<=10;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}*/
int main(){
    int i,j,n,m,x,y,r;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%d%d",&x,&y);
        a[x][y]=1;
    }
    //printmap();
    for(i=0;i<m;i++){
        scanf("%d%d%d",&x,&y,&r);
        printf("%d\n",bomb(x,y,r));
        //printmap();
    }
    return 0;
}
