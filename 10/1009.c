#include<stdio.h>
#include<math.h>
/*float pow10(int a){
    return pow(10,a);
}*/
int main(){
    int i,j,n[2],number[2][10]={0};
    long long int num[2]={0};
    char t[6][40];
    for(i=0;i<2;i++ )
        scanf("%d",&n[i]);
    scanf("%*c");
    for(i=0;i<6;i++)
        gets(t[i]);
    /*for(i=0;i<6;i++)
        printf("%s\n",text[i]);*/
    for(i=0;i<2;i++)
        for(j=0;j<n[i];j++)
            if(t[3*i+2][4*j+2]=='|')
                if(t[3*i][4*j+1]=='_'){
                    if(t[3*i+1][4*j+1]=='_'){
                        if(t[3*i+1][4*j+2]=='|'){
                            if(t[3*i+1][4*j]=='|'){
                                if(t[3*i+2][4*j]=='|')
                                    number[i][j]=8;
                                else
                                    number[i][j]=9;
                            }
                            else
                                number[i][j]=3;
                        }
                        else{
                            if(t[3*i+2][4*j]=='|')
                                number[i][j]=6;
                            else
                                number[i][j]=5;
                        }
                    }
                    else{
                        if(t[3*i+2][4*j+1]=='_')
                            number[i][j]=0;
                        else
                            number[i][j]=7;
                    }
                }
                else{
                    if(t[3*i+1][4*j+1]=='_')
                        number[i][j]=4;
                    else
                        number[i][j]=1;
                }
            else
                number[i][j]=2;
    /*for(i=0;i<2;i++){
        for(j=0;j<n[i];j++)
            printf("%d",number[i][j]);
        printf("\n");
    }*/
    for(i=0;i<2;i++)
        for(j=0;j<n[i];j++){
            num[i]+=number[i][j]*pow(10,n[i]-j-1);
            //printf("num%d = %d\n",i,num[i]);
        }
    /*for(i=0;i<2;i++)
        printf("%lli\n",num[i]);*/
    printf("%lli",num[0]+num[1]);
    return 0;
}
