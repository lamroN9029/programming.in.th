#include<bits/stdc++.h>
using namespace std;
int n, k, p, pos, player;
int a[20];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<int> v(101);
    cin >> n >> k;
    for(int i = 1; i <= n ; ++i)
        cin >> v[i];
    ++n;
    while(--n){
        cin >> p;
        pos = (pos + p) % n;
        a[++player % k] += v[pos+1];
        //cout << "player " << player % k << " " << a[player%k] << endl;
        v.erase(v.begin() + pos+1);
    }
    for(int i = 1; i < k; ++i)
        cout << a[i] << endl;
    cout << a[0];
    return 0;
}
