#include<stdio.h>
int main(){
    int i,j,k,n,ch,tmp;
    int a[9][9],b[9][9];
    scanf("%d",&n);
    for(i=0;i<9;i++)
        for(j=0;j<9;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++){
        ch=1;
        int row[9]={0},col[9][9]={0};
        for(j=0;j<9;j++){
            for(k=0;k<9;k++){
                 scanf("%d",&tmp);
                 if(a[j][k]!=0&&tmp!=a[j][k])
                    ch=0;
                 row[tmp-1]=1;
                 col[k][tmp-1]=1;
            }
            for(k=0;k<9;k++)
                if(row[k]==0){
                    ch=0;
                    break;
                }

        }
        if(ch)
            for(j=0;j<9;j++)
                for(k=0;k<9;k++)
                    if(col[j][k]==0){
                        ch=0;
                        j=99;
                        break;
                    }
        if(ch)
            printf("%d\n",i+1);
    }
    printf("END");
    return 0;
}
