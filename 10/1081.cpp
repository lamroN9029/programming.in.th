#include<bits/stdc++.h>
using namespace std;
const int N = 5e2;
int n;
int a[4][N*N/4];
int idx[4];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n/2; ++i){
        for(int j = 0; j < n/2; ++j){
            cin >> a[0][idx[0]] >> a[1][idx[1]];
            ++idx[0], ++idx[1];
        }
        for(int j = 0; j < n/2; ++j){
            cin >> a[2][idx[2]] >> a[3][idx[3]];
            ++idx[2], ++idx[3];
        }
    }
    int x = n*n/4;
    for(int i = 0; i < 4; ++i)
        sort(a[i], a[i]+x);
    int sum = 0;
    for(int i = 0; i < x; ++i)
        sum += a[0][i]*a[1][i]*a[2][i]*a[3][i];
    printf("%d", sum);
    return 0;
}
