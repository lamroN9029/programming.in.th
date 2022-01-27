#include<stdio.h>
int main(){
    int n,i,j,k,counti,countv,countx,countl,countc;
        counti=countv=countx=countl=countc=0;
    scanf("%d",&n);
    for(i=0;i<=3;i++)
        for(j=0;j<=9;j++)
            for(k=0;k<=9;k++){
                if(i*100+j*10+k>n) break;
                    if((i==1)||(i==2)||(i==3))
                        countc+=i;
                    if((j==1)||(j==2)||(j==3))
                        countx+=j;
                    if(j==4){
                        countx++;
                        countl++;
                    }
                    if((j==5)||(j==6)||(j==7)||(j==8)){
                        countl++;
                        countx+=j-5;
                    }
                    if(j==9){
                        countx++;
                        countc++;
                    }
                    if((k==1)||(k==2)||(k==3))
                        counti+=k;
                    if(k==4){
                        counti++;
                        countv++;
                    }
                    if((k==5)||(k==6)||(k==7)||(k==8)){
                        countv++;
                        counti+=k-5;
                    }
                    if(k==9){
                        counti++;
                        countx++;
                    }
            }
    printf("%d %d %d %d %d",counti,countv,countx,countl,countc);
}
