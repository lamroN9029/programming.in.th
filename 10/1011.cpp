#include<cstdio>
using namespace std;
int m, n, l, score = 0;
char a[5][6];

void table(){
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j)
            printf("%c ",a[i][j]);
        printf("\n");
    }
}

void cal(int x ,int y){
    int count = 0;
    for(int i = 1; a[x][y-i] == a[x][y]; ++i)
        a[x][y-i] = '-', ++count;
    for(int i = 1; a[x][y+i] == a[x][y]; ++i)
        a[x][y+i] = '-', ++count;
    for(int i = 1; a[x+i][y] == a[x][y]; ++i)
        a[x+i][y] = '-', ++count;
    if(count)
        a[x][y] = '-', score = score + ++count*5 ;
}

void clr(){
    for(int i = m-1; i >= 0; --i)
        for(int j = 0; j < n; ++j)
            if(a[i][j] != '#' && a[i][j] != '-' && a[i+1][j] == '-')
                a[i+1][j] = a[i][j], a[i][j] = '-';
    for(int i = m-1; i >= 0; --i)
        for(int j = 0; j < n; ++j)
            if(a[i][j] != '#' && a[i][j] != '-')
                cal(i, j);
}

int main(){
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j){
            scanf(" %c", &a[i][j]);
            scanf("%*c");
        }
    scanf("%d", &l);
    for(int i = 0; i < l; ++i){
        int x, y;
        char cmd;
        scanf("%d%d %c", &x, &y ,&cmd);
        if(a[x][y] != '-' && a[x][y] != '#'){
            if(a[x][y-1] == '-' && cmd == 'L'){
                int count = 0;
                while(a[x+count][y-1] == '-') ++count;
                a[x+count-1][y-1] = a[x][y];
                a[x][y] = '-';
                //table();
                cal(x+count-1,y-1);
            }
            else if(a[x][y+1] == '-' && cmd == 'R'){
                int count = 0;
                while(a[x+count][y+1] == '-') ++count;
                a[x+count-1][y+1] = a[x][y];
                a[x][y] = '-';
                //table();
                cal(x+count-1,y+1);
            }
            else score = score - 5;
            clr();
            clr();
        }else score = score - 5;
    }
    printf("%d\n", score);
    table();
    return 0;
}
