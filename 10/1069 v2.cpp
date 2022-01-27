#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
char ch, st[N+1];
int j = 0, n;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin >> n >> st[0];
    for(int i = 0; i < n-1; ++i){
        cin >> ch;
        if(ch != st[j]) st[++j] = ch;
        else --j;
    }
    ++j;
    st[j] = '\0';
    if(j == 0) cout << "0\nempty";
    else{
        for(int i = 0; i < j/2; ++i){
            st[i] = st[i] ^ st[j-i-1];
            st[j-i-1] = st[j-i-1] ^ st[i];
            st[i] = st[i] ^ st[j-i-1];
        }
        cout << j << "\n" << st;
    }
    return 0;
}
