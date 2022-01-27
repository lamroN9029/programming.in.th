#include<bits/stdc++.h>
using namespace std;
const int N = 1e3;
vector<vector<int>> v(N+1);
int n, k, a;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> k;
        for(int j = 0; j < k; ++j){
            cin >> a;
            v[i].push_back(a);
        }
    }
    for(int i = 1; i <= n; ++i){
        deque<int> q;
        bool visited[n+1];
        bool skip = false;
        memset(visited, false, n+1);
        //visited[i] = true;
        q.push_back(i);
        while(!q.empty()){
            int cur = q.front(); q.pop_front();
            for(int j = 0; j < v[cur].size(); ++j){
                int next = v[cur][j];
                if(visited[next]){
                    printf("YES\n");
                    skip = true;
                    break;
                }
                visited[next] = true;
                q.push_back(next);
            }
            if(skip) break;
        }
        if(!skip) printf("NO\n");
    }
    return 0;
}
