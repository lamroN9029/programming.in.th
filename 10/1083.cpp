#include<bits/stdc++.h>
using namespace std;
const int N = 1e6+1;
int a[N], dp[N];
int n, q;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    int mx = a[n];
    int x = dp[n];
    for(int i = n-1; i >= 1; --i){
        dp[i] = max(mx-a[i]+x, dp[i+1]);
        if(a[i+1] <= a[i]){
            mx = a[i];
            x  = dp[i];
        }
    }
    cin >> q;
    int a, b;
    for(int i = 0; i < q; ++i){
        cin >> a >> b;
        printf("%d\n", dp[a]-dp[b]);
    }
    return 0;
}
