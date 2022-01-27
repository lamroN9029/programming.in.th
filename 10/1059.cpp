#include<bits/stdc++.h>
using namespace std;
int n, s , m;
const string SMS[9] = {"","CAB","FDE","IGH","LJK","OMN","SPQR","VTU","ZWXY"};
string st;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> s >> m;
    if(s != 1){
        if(s == 7 || s == 9)
            st.push_back(SMS[s-1][m%4]);
        else
            st.push_back(SMS[s-1][m%3]);
    }
    int h, v;
    for(int i = 0; i < n-1; ++i){
        cin >> h >> v >> m, s += (3*v)+h;
        if(s == 1)
            for(int j = 0; j < m; ++j){
                if(!isalpha(st[0])) break;
                else st.erase(st.end() - 1);
            }
        else if(s == 7 || s == 9) st.push_back(SMS[s-1][m%4]);
        else st.push_back(SMS[s-1][m%3]);
    }
    if(isalpha(st[0])) cout << st;
    else cout << "null";
    return 0;
}
