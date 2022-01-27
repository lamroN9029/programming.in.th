#include<stdio.h>
int a[17][17]={-1};
int NW(int i,int j){
    return a[i][j]==a[i-1][j-1]? 1:0;
}
int N(int i,int j){
    return a[i][j]==a[i-1][j]? 1:0;
}
int NE(int i,int j){
    return a[i][j]==a[i-1][j+1]? 1:0;
}
int SW(int i,int j){
    return a[i][j]==a[i+1][j-1]? 1:0;
}
int S(int i,int j){
    return a[i][j]==a[i+1][j]? 1:0;
}
int SE(int i,int j){
    return a[i][j]==a[i+1][j+1]? 1:0;
}
int W(int i,int j){
    return a[i][j]==a[i][j-1]? 1:0;
}
int E(int i,int j){
    return a[i][j]==a[i][j+1]? 1:0;
}
int index_1(int i,int j){
    if(E(i,j)&&S(i,j)&&!SE(i,j)&&!E(i,j+1)&&!S(i+1,j)
       &&!N(i,j)&&!W(i,j)&&!NE(i,j)&&!SW(i,j))
        return 1;
    else
        return 0;
}
int index_2(int i,int j){
    if(W(i,j)&&N(i,j)&&!NW(i,j)&&!W(i,j-1)&&!N(i-1,j)
        &&!S(i,j)&&!E(i,j)&&!SW(i,j)&&!NE(i,j))
        return 1;
    else
        return 0;
}
int index_3(int i,int j){
    if(W(i,j)&&S(i,j)&&!SW(i,j)&&!W(i,j-1)&&!S(i+1,j)
       &&!N(i,j)&&!E(i,j)&&!NW(i,j)&&!SE(i,j))
        return 1;
    else
        return 0;
}
int index_4(int i,int j){
    if(E(i,j)&&N(i,j)&!NE(i,j)&&!E(i,j+1)&&!N(i-1,j)
       &&!S(i,j)&&!W(i,j)&&!NW(i,j)&&!SE(i,j))
        return 1;
    else
        return 0;
}
int main(){
    int i,j,n,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    /*printf("\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            if(index_1(i,j)||index_2(i,j)||index_3(i,j)||index_4(i,j)){
                ans++;
                printf("1 ");
            }
            else printf("0 ");
        printf("\n");
    }*/
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(index_1(i,j)||index_2(i,j)||index_3(i,j)||index_4(i,j))
                ans++;
    printf("%d",ans);
    return 0;
}
