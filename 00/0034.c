#include<stdio.h>
#include<math.h>
int swap(int *x,int *y){
    int temp;
    temp=*y;
    *y=*x;
    *x=temp;

}
int gcd(int x,int y){
   if(x%y) gcd(y,x%y);
   else return y;
}
int main(){
    int A,B,C,a,b,c,d,gcd1,gcd2,x;
    float t;
    scanf("%d%d%d",&A,&B,&C);
        t=sqrt(B*B-4*A*C);
        if(t<0||t-(int)t!=0) printf("No Solution");
        else{
            gcd1=gcd(fabs(-B+t),2*A);
            gcd2=gcd(fabs(-B-t),2*A);
            x=gcd(gcd(fabs(A),fabs(B)),fabs(C));
            b=(B-t)/gcd1;
            a=2*A/gcd1;
            d=(B+t)/gcd2;
            c=2*A/gcd2;
            if(a>c){
                swap(&a,&c);
                swap(&b,&d);
            }
            if(a==c&&b>d) swap(&b,&d);
            printf("%d %d %d %d",a,b,c*x,d*x);
        }
    return 0;
}
