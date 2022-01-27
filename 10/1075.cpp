#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
struct worm{
    int d;
    int c;
}a[N];
int n, m2;
long long sum, m1;
double mx;
bool compare(worm x, worm y){
    return x.c < y.c;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i].d >> a[i].c;
    sort(a, a+n, compare);
    for(int i = 0; i < n; ++i){
        sum += a[i].d;
        double cal = (double)sum / a[i].c;
        if(cal > mx) mx = cal, m1 = sum, m2 = a[i].c;
    }
    cout << m1 << " " << m2;
    return 0;
}
