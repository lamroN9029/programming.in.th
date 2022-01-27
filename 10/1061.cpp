#include<bits/stdc++.h>
using namespace std;
int a[22][22];
int m, x , y, mx;

/*void plist(){
    for(int i = 0; i <= m+1; ++i){
        for(int j = 0; j <= m+1; ++j)
            printf("%3d ", a[i][j]);
        cout << endl;
    }
}*/

void m_search(int i, int j){
    if(a[i-1][j] != 100 && a[i-1][j] > a[i][j]){
        if(a[i-1][j] > mx)
            mx = a[i-1][j];
        m_search(i-1, j);
    }
    if(a[i+1][j] != 100 && a[i+1][j] > a[i][j]){
        if(a[i+1][j] > mx)
            mx = a[i+1][j];
        m_search(i+1, j);
    }
    if(a[i][j-1] != 100 && a[i][j-1] > a[i][j]){
        if(a[i][j-1] > mx)
            mx = a[i][j-1];
        m_search(i, j-1);
    }
    if(a[i][j+1] != 100 && a[i][j+1] > a[i][j]){
        if(a[i][j+1] > mx)
            mx = a[i][j+1];
        m_search(i, j+1);
    }
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> m >> x >> y;
    for(int i = 0; i <= m+1; ++i)
        for(int j = 0; j <= m+1; ++j)
            a[i][j] = 100;
    for(int i = 1; i <= m; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];
    //plist();
    mx = a[y][x];
    m_search(y, x);
    cout << mx;
    return 0;
}
