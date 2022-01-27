#include<stdio.h>
int main(){
    int i,j,m,n,t,max=-9999,sum=0,row,col;
    int rbefore[102]={0},rafter[102]={0},cbefore[102]={0},cafter[102]={0};
    char ch;
    scanf("%d%d",&m,&n);
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
            scanf("%d",&t);
            rbefore[i]+=t;
            cbefore[j]+=t;
            sum+=t;
        }
    }
    for(i=1;i<m+1;i++){
        for(j=1;j<n+1;j++){
            scanf("%d",&t);
            rafter[i]+=t;
            cafter[j]+=t;
        }
    }
    for(i=1;i<m+1;i++){
        t=rafter[i-1]+rafter[i+1]-rbefore[i];
        if(t>max){
            row=i;
            max=t;
            ch='r';
        }
    }
    for(i=1;i<n+1;i++){
        t=cafter[i-1]+cafter[i+1]-cbefore[i];
        if(t>max){
            col=i;
            max=t;
            ch='c';
        }
    }
    printf("%d",ch=='r'? sum+rafter[row-1]+rafter[row+1]-rbefore[row]:sum+cafter[col-1]+cafter[col+1]-cbefore[col]);
    return 0;
}
