#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int i,j,m,n,a[8],b[8],tmp;
    scanf("%d%d",&n,&m);
    for(i=0;i<8;i++){
        a[i]=b[i]=i+1;
    }
    for(i=0;i<m;i++){
        scanf("%d",&tmp);
        b[tmp-1]=99;
    }
    sort(b,b+n);
    /*for(i=0;i<n;i++)
        printf("%d ",b[i]);
    printf("\n");*/
    for(i=0;i<n-m;i++){
        //printf("a[0] = %d\n",a[0]);
        swap(a[b[i]-1],a[0]);
        //printf("a[0] = %d\n",a[0]);
        sort(a+1,a+n);
        do{
            for(j=0;j<n;j++)
                printf("%d ",a[j]);
            printf("\n");
        }while(next_permutation(a+1,a+n));
    }
    return 0;
}
