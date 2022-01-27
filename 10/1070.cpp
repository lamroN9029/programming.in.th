#include<bits/stdc++.h>
const int N = 1e5;
int n, a[N], mn1 = N, mn2 = N, mx = 0;
int main(){
    scanf("%d",&n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if(a[i] > mx)
            mx = a[i];
        if(a[i] < mn1)
            mn2 = mn1, mn1 = a[i];
        else if(a[i] < mn2)
            mn2 = a[i];
    }
    if(n < 3) printf("no");
    else printf("%s", mn1 + mn2 > mx ? "no" : "yes");
    return 0;
}
