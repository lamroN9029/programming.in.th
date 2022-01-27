#include<stdio.h>
int gcd(int a,int b){
    return a%b? gcd(b,a%b):b;
}
int main(){
    int i,j,cnt,red,green,number,ch=0;
    int a[100]={0},b[100]={0};
    scanf("%d%d",&red,&green);
    number=gcd(red,green);
    if(number==1){
        printf("%d %d %d\n",number,red/number,green/number);
    }else{
        a[0]=1;
        b[0]=number;
        for(i=2,cnt=1;i*i<=number;i++){
            if(number%i==0){
                if(number/i==i){
                    a[cnt]=i;
                    ch=1;
                }
                else{
                    a[cnt]=i;
                    b[cnt]=number/i;
                }
                cnt++;
            }
        }
        for(i=0;i<cnt;i++)
            printf("%d %d %d\n",a[i],red/a[i],green/a[i]);
        for(i=cnt-1-ch;i>=0;i--)
            printf("%d %d %d\n",b[i],red/b[i],green/b[i]);
    }
    return 0;
}
