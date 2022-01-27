#include<bits/stdc++.h>
using namespace std;
const int N = 5e3;
int x, y, r, a, b, k, mx = 0, row[N+1] = {0}, col[N+1] = {0};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> a >> b >> k;
    for(int i = 0; i < k; ++i){
        cin >> x >> y >> r;
        for(int j = y-r; j <= y+r && j <= b && j>=0; ++j)
            ++row[j];
        for(int j = x-r; j <= x+r && j <= a && j>=0; ++j)
            ++col[j];
    }
    const int M = max(a, b);
    for(int i = 0; i <= M; ++i){
        int m = max(col[i], row[i]);
        if(m > mx) mx = m;
    }
    cout << mx;
    return 0;
}
