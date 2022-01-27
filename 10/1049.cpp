#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+1;
int n, m, a, l, s, r = 0;
int number[N], mx[N], arr[10001], line[N] = {0};
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < n; ++i){
        cin >> a >> l >> s;
        ++arr[l];
        if(arr[l] > r) r = arr[l];
        if(s > mx[arr[l]] || s == mx[arr[l]] && l < line[arr[l]]) mx[arr[l]] = s, number[arr[l]] = a, line[arr[l]] = l;
    }
    for(int i = 1; i<= r; ++i)
        cout << number[i] << "\n";
    return 0;
}
