#include<bits/stdc++.h>
int a[201][201] = {0}, mn[10000];
int n, k, cnt, sum = 0;
int main(){
    scanf("%d %d", &n, &k);
    for(int i = 0; i < 2*n+1; ++i){
        if(i&1) for(int j = 0; j < 2*n+1; j+=2) scanf("%d", &a[i][j]);
        else for(int j = 1; j < 2*n; j+=2) scanf("%d", &a[i][j]);
    }
    for(int i = 1; i < 2*n+1; i+=2)
        for(int j = 1; j < 2*n+1; j+=2)
            mn[cnt++] = 3 * (a[i-1][j]-a[i+1][j]) + 5 * (a[i][j-1]-a[i][j+1]);
    std::sort(mn, mn+cnt);
    for(int i = 0;i < k; ++i) sum += mn[i];
    printf("%d",sum);
    return 0;
}
