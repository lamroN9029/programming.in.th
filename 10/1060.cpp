#include<bits/stdc++.h>
using namespace std;
int n, s, h, maxh = 0, maxs = 0, i, j, k;
char a[11][82];
char st[82] = ".................................................................................";
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    for(i = 0; i <= 10; ++i)
        strcpy(a[i], st);
    for(i = 0; i < n; ++i){
        cin >> s >> h;
        if(s+h*2 > maxs)
            maxs = s+h*2;
        if(h > maxh)
            maxh = h;
        const int H = h;
        --h;
        for(j = 10; j >= 11-H; --j){
            if(a[j][s] == '\\')
                a[j][s] = 'v';
            else if(a[j][s] == '.')
                a[j][s] = '/';
            k = s+1;
            while(k <= s+h*2){
                a[j][k] = 'X';
                ++k;
            }
            if(a[j][k] == '/')
                a[j][k] = 'v';
            else if(a[j][k] == '.')
                a[j][k] = '\\';
            ++s;
            --h;
        }
    }
    --maxs;
    for(i = 11-maxh; i <= 10; ++i){
        for(j = 1; j <= maxs; ++j)
            cout << a[i][j];
        cout << "\n";
    }
    return 0;
}

