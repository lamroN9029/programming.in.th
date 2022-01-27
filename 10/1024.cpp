#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n, tmp ,MIN = 1001, s1, s2, t1, t2;
int main(){
    scanf("%d", &n);
    int a[n];
    int sum[n];
    for(int i = 0; i < n; ++i){
        scanf("%d", &a[i]);
        if(i > 0) sum[i] = sum[i-1] + a[i];
        else sum[i] = a[i];
    }
    int mean = sum[n-1]/3;
    for(int i = 0; i < n-2; ++i){
        int dif = abs(sum[i] - mean);
        if(dif < MIN) MIN = dif, s1 = i;
    }
    MIN = 1001;
    for(int i = s1+1; i< n-1; ++i){
        int dif = abs(sum[i] - sum[s1] - mean);
        if(dif < MIN) MIN = dif, t1 = i;
    }
    tmp = 0;
    MIN = 1001;
    for(int i = n-1; i  > 1; --i){
        tmp = tmp + a[i];
        int dif = abs(tmp - mean);
        if(dif < MIN) MIN = dif, t2 = i;
    }
    tmp = 0;
    MIN = 1001;
    for(int i = t2-1; i > 0; --i){
        tmp = tmp + a[i];
        int dif = abs(tmp - mean);
        if(dif < MIN) MIN = dif, s2 = i;
    }
    int s11 = sum[s1];
    int s12 = sum[t1] - sum[s1];
    int s13 = sum[n-1] - sum[t1];
    int s21 = sum[s2-1];
    int s22 = sum[t2-1] - sum[s2-1];
    int s23 = sum[n-1] - sum[t2-1];
    int d1, d2;
    d1 = max(s11,max(s12,s13)) - min(s11,min(s12,s13));
    d2 = max(s21,max(s22,s23)) - min(s21,min(s22,s23));
    /*printf("d1 = %d d2 = %d\n", d1, d2);
    printf("%d %d\n", s1+2, t1+2);
    printf("%d %d", s2+1 , t2+1);*/
    if(d1 <= d2) printf("%d %d", s1+2, t1+2);
    else printf("%d %d", s2+1 , t2+1);
    return 0;
}
