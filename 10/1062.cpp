#include<bits/stdc++.h>
using namespace std;
int l, k;
string lock1, key, lock2;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> l >> k >> lock1 >> lock2 >> key;
    for(int i = 0; i < l; ++i)
        for(int j = 0; j < k; ++j){
            string buf;
            buf += lock1[i], buf += key[j], buf += lock2[i];
            //cout << buf << "\n";
            sort(buf.begin(), buf.end());
            key[j] = buf[1];
        }
    cout << key;
    return 0;
}
