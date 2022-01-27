#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
struct{
    int x, y;
}a[N], d;
int n, cnt, mx, idx;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i].x >> a[i].y;
    // push right
    d = a[0];
    for(int i = 1; i < n; ++i){
        if(d.x+d.y > a[i].x){   // fall
            ++cnt;
            if(d.x+d.y < a[i].x+a[i].y)
                d = a[i];
        }
        else{  // not fall
            d = a[i];
            cnt = 0;
        }
        if(cnt > mx) mx = cnt, idx = i-mx;
    }
    int r_mx = mx, r_idx = idx+1;
    // push left
    d = a[n-1], mx = cnt = 0, idx = n-1;
    for(int i = n-2; i >= 0; --i){
        if(d.x-d.y < a[i].x){
            ++cnt;
            if(d.x-d.y > a[i].x-a[i].y)
                d = a[i];
        }
        else{
            d = a[i];
            cnt = 0;
        }
        if(cnt >= mx) mx = cnt, idx = i+mx;
    }
    int l_mx = mx, l_idx = idx+1;
    //printf("l_mx = %d, r_mx = %d, l_idx = %d, r_idx = %d\n", l_mx, r_mx, l_idx, r_idx);
    if(l_mx > r_mx) printf("%d L\n", l_idx);
    else if(l_mx < r_mx) printf("%d R\n", r_idx);
    else{ // l_mx == r_mx
        if(l_idx <= r_idx) printf("%d L\n", l_idx);
        else printf("%d R\n", r_idx);
    }
    return 0;
}
