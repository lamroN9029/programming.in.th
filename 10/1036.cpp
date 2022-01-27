#include<bits/stdc++.h>
using namespace std;
const int N = 1 << 8;
const int INF = 1e9;
int n, k, temp, mbit, w, bit, mn = INF, c = -1;
int a[N], membit[N];
bool b[N];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    mbit = (1 << k)-1;
    for(int i = 0; i <= mbit; ++i) a[i] = INF;
    for(int i = 0; i < n; ++i){
        bit = 0, cin >> w;
        for(int j = 0; j < k; ++j)
            cin >> temp, bit += temp << j;
        if(w < a[bit])
            a[bit] = w;
        if(b[bit] == false){
            b[bit] = true;
            membit[c] = bit;
            ++c;
        }
        for(int j = 0; j < c; ++j)
            a[bit|membit[j]] = min(a[bit|membit[j]], a[bit]+a[membit[j]]);
    }
    cout << a[mbit];
    return 0;
}
