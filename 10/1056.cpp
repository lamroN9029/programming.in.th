#include<bits/stdc++.h>
using namespace std;
const int N = 2e3;
int n, k, sum, pos = 0;
int a[N];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> k;
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a+n, greater<int>());
    while(pos < n) sum += a[pos], pos += k;
    cout << sum;
    return 0;
}
