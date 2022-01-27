#include<bits/stdc++.h>
using namespace std;
int n, d;
long long sum = 0;
vector<int> v(1000);
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> v[i];
    int s = n;
    for(int i = 0; i < n/2; ++i){
        int dif, mx = 0;
        for(int j = 0; j < s-1; ++j){
            dif = abs(v[j+1] - v[j]);
            if(dif > mx) mx = dif, d = j;
        }
        sum += mx;
        //cout << "sum = " << sum << endl;
        for(int j = 0; j < 2; ++j)
            v.erase(v.begin() +d);
        /*for(int j = 0; j < n; ++j)
            cout << v[j] << " ";
        cout << endl;*/
        s-=2;
    }
    cout << sum;
    return 0;
}
