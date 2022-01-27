#include<stdio.h>
int main(){
    int n,number,check=1;
    int cross=0;
    int i,j,a[11][11]={0},b[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(b[a[i][j]-1]==0)
                b[a[i][j]-1]=1;
            else{
                check=0;
                break;
            }
            a[i][n]+=a[i][j];
            a[n][j]+=a[i][j];
            if(i==j)
                a[n][n]+=a[i][j];
            if(i+j==n-1)
                cross+=a[i][j];
        }
    //display table
    /*for(i=0;i<n;i++)
        printf("    ");
    printf("%d\n",cross);
    for(i=0;i<n+1;i++){
        for(j=0;j<n+1;j++)
            printf("%3d ",a[i][j]);
        printf("\n");
    }*/
    if(a[n][n]!=cross)
        check=0;
    for(i=0;i<n;i++)
        if(a[i][n]=!cross||a[n][i]!=cross)
             check=0;
    printf("%s",check? "Yes":"No");
    //display b[]
    /*for(i=0;i<n*n;i++)
        printf("\n%d = %d",i+1,b[i]);*/
    return 0;
}
