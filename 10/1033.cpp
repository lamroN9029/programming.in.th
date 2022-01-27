#include<bits/stdc++.h>
using namespace std;
const int N = 1e2, P = 4;
int a[N+2][N+2];
int n, k;
char cmd[P][N*N];
pair <int, int> pos[P];
int score[P], mx, cnt;
/*void table(){
    for(int i = 0; i <= n+1; ++i){
        for(int j = 0; j <= n+1; ++j)
            printf("%2d", a[i][j]);
        printf("\n");
    }
}*/
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    for(int i = 0; i <= n+1; ++i)
        a[0][i] = a[i][0] = a[n+1][i] = a[i][n+1] = -1;
    pos[0].first = 1;
    pos[0].second = n;
    pos[1].first = n;
    pos[1].second = n;
    pos[2].first = n;
    pos[2].second = 1;
    pos[3].first = 1;
    pos[3].second = 1;
    a[1][n] = a[n][n] = a[n][1] = a[1][1] = -1;
    for(int i = 0; i < P; ++i)
        for(int j = 0; j < k; ++j)
            cin >> cmd[i][j];
    for(int i = 0; i < k; ++i)
        for(int j = 0; j < P; ++j){
            int y = pos[j].first;
            int x = pos[j].second;
            switch(cmd[j][i]){
                case 'N':
                    if(a[y-1][x] != -1){
                        a[y][x] = j+1;
                        a[y-1][x] = -1;
                        --pos[j].first;
                    }
                    break;
                case 'S':
                    if(a[y+1][x] != -1){
                        a[y][x] = j+1;
                        a[y+1][x] = -1;
                        ++pos[j].first;
                    }
                    break;
                case 'W':
                    if(a[y][x-1] != -1){
                        a[y][x] = j+1;
                        a[y][x-1] = -1;
                        --pos[j].second;
                    }
                    break;
                case 'E':
                    if(a[y][x+1] != -1){
                        a[y][x] = j+1;
                        a[y][x+1] = -1;
                        ++pos[j].second;
                    }
                    break;
            }
        }
    //table();
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            if(a[i][j] == 0){
                printf("No");
                return 0;
            }else if(a[i][j] != -1){
                ++score[a[i][j]-1];
            }
        }
    for(int i = 0; i < P; ++i)
        if(score[i] > mx) mx = score[i];
    for(int i = 0; i < P; ++i)
        if(mx == score[i]) ++cnt;
    printf("%d %d", cnt, mx+1);
    for(int i = 0; i < P; ++i)
        if(mx == score[i]) printf("\n%d", i+1);
    return 0;
}
