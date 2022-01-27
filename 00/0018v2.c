#include<stdio.h>
int n,k,a[1001];
int solve(){
    for(int i=2;i<=n;i++){
        if(a[i]) continue;
        for(int j=i;j<=n;j+=i){
            if(a[j]) continue;
            if(!--k) return j;
            a[j]=1;
        }
    }
}
int main(){
    scanf("%d%d",&n,&k);
    printf("%d",solve());
    return 0;
}
