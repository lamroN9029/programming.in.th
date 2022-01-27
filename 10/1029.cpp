#include<cstdio>
#include<algorithm>
using namespace std;
int n, m, q, a, k, x;
int arr[200001];

int bsearch(int low, int high ,int x){
    int mid = low + high >> 1;
    if(arr[mid] <= x && x < arr[mid+1] ) return arr[mid+1] - arr[mid];
    else if(x > arr[mid]) bsearch(mid+1, high, x);
    else bsearch(low, mid-1 , x);
}

int main(){
    scanf("%d%d%d", &n, &m, &q);
    int l = m * 2;
    for(int i = 0; i < l; i += 2)
        scanf("%d%d", &a, &k), arr[i] = a, arr[i+1] = a+k;
    sort(arr, arr+l);
    for(int i = 0; i < l-1; ++i)
        if(arr[i] == arr[i+1])
            arr[i] = arr[i+1] = 0;
    sort(arr, arr+l);
    int s = 0;
    while(arr[s] == 0) ++s;
    for(int i = 0; i < q ; ++i){
        scanf("%d", &x);
        if(x >= arr[l-1]) printf("%d", n-arr[l-1]+1 );
        else if(x < arr[s]) printf("%d", arr[s]-1);
        else printf("%d", bsearch(s, l-1, x));
        printf("\n");
    }
    return 0;
}
