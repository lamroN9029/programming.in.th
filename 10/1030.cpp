#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int k, p, m, b;
struct rice{
    double p;
    int q;
}a[N];

int compare(rice r1, rice r2){
    return r1.p < r2.p;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> k;
    for(int i = 0; i < k; ++i)
        cin >> p >> a[i].q, a[i].p = (double)p/a[i].q;
    sort(a, a+k, compare);
    cin >> m;
    int j = 0;
    for(int i = 0; i < m; ++i){
        cin >> b;
        double cal = 0;
        while(1){
            if(a[j].q-b >= 0){
                a[j].q -= b;
                cal += a[j].p * b;
                break;
            }
            else{
                b -= a[j].q;
                cal += a[j].p * a[j].q;
                a[j].q = 0;
                ++j;
            }
        }
        printf("%.3lf\n", cal);
    }
    return 0;
}
