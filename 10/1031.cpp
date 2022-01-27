#include<bits/stdc++.h>
using namespace std;
const int N = 1e4;
int k, n, m;
deque<int> q;
vector<vector<int>> v(N+1);
bool visited[N+1];
int level[N+1];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> k >> n >> m;
    int a, b;
    for(int i = 0; i < m; ++i){
        cin >> a >> b;
        v[a].push_back(b);
    }
    int start = 1;
    if(!v[start].empty()) q.push_back(start);
    else{
        printf("%d", start);
        return 0;
    }
    while(!q.empty()){
        int cur = q.front();
        q.pop_front();
        for(int j = 0; j < v[cur].size(); ++j){
            int next = v[cur][j];
            if(!visited[next]){
                visited[next] = true;
                if(level[cur] == k) continue;
                level[next] = level[cur]+1;
                q.push_back(next);
            }
        }
    }
    for(int i = n; i >= 1; --i)
        if(level[i] != 0){
            printf("%d", i);
            return 0;
        }
}
