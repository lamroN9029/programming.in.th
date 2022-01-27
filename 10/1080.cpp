#include<bits/stdc++.h>
const int N = 3e4;
int n, a[N], mx = 0;
int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    std::sort(a, a+n);
    for(int i = n-1; i>= 2; --i){
        int cou = i+1;
        int j = 0;
        while(a[j] + a[j+1] <= a[i]) --cou, ++j;
        mx = std::max(mx, cou);
    }
    printf("%d", mx == 0 ? n : mx );
    return 0;
}
