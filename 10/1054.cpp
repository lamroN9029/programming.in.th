#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
int n, c = 0;

struct circle{
    int x;
    int y;
    int r;
}a[N+1];

bool compare(circle a, circle b){
    return a.x < b.x ;
}

/*void list(){
    for(int i = 0; i < n; ++i)
        cout << a[i].x << " " << a[i].y << " " << a[i].r << endl;
}*/

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; ++i)
        cin >> a[i].x >> a[i].y >> a[i].r;
    sort(a, a+n, compare);
    a[n].x = 20020;
    //list();
    for(int i = 0; i < n-1; ++i)
        for(int j = i+1; a[j].x - a[i].x < 20 ; ++j)
            if(pow(a[i].x - a[j].x,2) + pow(a[i].y - a[j].y,2) < pow(a[i].r + a[j].r,2)) ++c;
    cout << c;
    return 0;
}
