#include<bits/stdc++.h>
const int N = 1e5;
using namespace std;
struct chemical{
    int col[10];
    int row;
}a[N];
int n, p, sum[10], cpy[N];
bool compare(chemical x, chemical y){
    if(x.col[0] == y.col[0]){
        for(int i = 1; i < p; ++i){
            if(x.col[i] == y.col[i]) continue;
            else if(x.col[i] < y.col[i]) return true;
            else return false;
        }
    }
    return x.col[0] < y.col[0];
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> p;
    for(int i = 0; i < n; ++i){
        a[i].row = i;
        for(int j = 0; j < p; ++j)
            cin >> a[i].col[j];
    }
    for(int i = 0; i < p; ++i) cin >> sum[i];
    sort(a, a+n, compare);
    /*for(int i = 0; i < n; ++i){
        for(int j = 0; j < p; ++j)
            cout << a[i].col[j] << " ";
        cout << "\n";
    }*/
    for(int i = 0; i < n; ++i)
        cpy[i] = a[i].col[0];
    for(int i = 0; i < n; ++i)
        if(cpy[i] == sum[0]){
            int j = 1;
            while(j < p){
                if(a[i].col[j] == sum[j]) ++j;
                else break;
            }
            if(j == p){
                cout << a[i].row+1;
                return 0;
            }
        }
    for(int i = 0; i < n; ++i){
        int r = lower_bound(cpy, cpy+n, sum[0]-cpy[i]) - cpy;
        int temp = r+1;
        while(a[temp].col[0] == a[r].col[0] && temp < n) ++temp;
        for(int k = r; k < temp; ++k){
            if(a[i].row >= a[k].row) continue;
            if(k < n){ // found in a[i].col[0]
                int j = 1;
                while(j < p){
                    if(a[i].col[j] + a[k].col[j] == sum[j]) ++j;
                    else break;
                }
                if(j == p){
                    cout << a[i].row+1 << " " << a[k].row+1;
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
