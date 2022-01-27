#include<bits/stdc++.h>
const int N = 1e3;
using namespace std;
struct{
    int p1, q1, p2, q2;
}rec[N];
int n, m, a1, b1, a2, b2;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        cin >> rec[i].p1 >> rec[i].q1 >> rec[i].p2 >> rec[i].q2;
    for(int i = 0; i < m; ++i){
        int cnt = 0;
        cin >> a1 >> b1 >> a2 >> b2;
        for(int j = 0; j < n; ++j)
            if(a1 < rec[j].p2 && b1 > rec[j].q2 && a2 > rec[j].p1 && b2 < rec[j].q1)
                ++cnt;
        cout << cnt << "\n";
    }
    return 0;
}
