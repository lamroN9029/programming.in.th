#include<bits/stdc++.h>
int n, m, k, x, y, cnt;
int a[102][102] = {0}, mem[10000][2];

void shift(int i, int j){
    mem[cnt][0] = i, mem[cnt][1] = j;
    //printf("%d %d\n", mem[cnt][0], mem[cnt][1]);
    for(int b = 0; b < cnt; ++b)
        if(i == mem[b][0] && j == mem[b][1]){
            printf("NO\n");
            return ;
        }
    ++cnt;
    if(a[i][j] == -1) printf("N\n");
    else if(a[i][j] == -2) printf("E\n");
    else if(a[i][j] == -3) printf("S\n");
    else if(a[i][j] == -4) printf("W\n");
    else if(a[i][j] == 1) shift(i-1, j);
    else if(a[i][j] == 2) shift(i, j+1);
    else if(a[i][j] == 3) shift(i+1, j);
    else shift(i, j-1);
}

int main(){
    int i, j;
    scanf("%d %d %d", &n, &m, &k);
    for(i = 1; i <= n; ++i)
        a[0][i] = -1;
    for(i = 1; i <= n; ++i)
        a[m+1][i] = -3;
    for(i = 1; i <= m; ++i)
        a[i][0] = -4;
    for(i = 1; i <= m; ++i)
        a[i][n+1] = -2;
    for(i = 1; i <= m; ++i)
        for(j = 1; j <= n; ++j)
            scanf("%d", &a[i][j]);
    /*for(i = 0; i <= m+1; ++i){
        for(j = 0; j <= n+1; ++j)
            printf("%2d ", a[i][j]);
        printf("\n");
    }*/
    for(i = 0; i < k; ++i){
        cnt = 0;
        mem[10000][2] = {0};
        scanf("%d %d", &x, &y);
        shift(y, x);
    }
    return 0;
}
