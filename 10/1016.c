#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
int main(){
    int i,j,k,digit;
    double x=0,y=0;
    char cmd[6],drt[3];
    while(1){
        scanf("%s",cmd);
        if(strcmp(cmd,"*")==0) break;
        digit=k=0;
        for(i=0;isdigit(cmd[i]);i++)
            digit++;
        for(i=0;isdigit(cmd[i]);i++)
            k+=(cmd[i]-'0')*pow(10,digit-i-1);
        for(i=digit,j=0;cmd[i];i++,j++)
            drt[j]=cmd[i];
        drt[j]='\0';
        /*printf("k = %d digit = %d\n",k,digit);
        printf("drt = %s\n",drt);*/
        if(strcmp(drt,"N")==0)
            y+=k;
        else if(strcmp(drt,"S")==0)
            y-=k;
        else if(strcmp(drt,"W")==0)
            x-=k;
        else if(strcmp(drt,"E")==0)
            x+=k;
        else if(strcmp(drt,"NW")==0){
            y+=sqrt(pow(k,2)/2);
            x-=sqrt(pow(k,2)/2);
        }else if(strcmp(drt,"NE")==0){
            y+=sqrt(pow(k,2)/2);
            x+=sqrt(pow(k,2)/2);
        }else if(strcmp(drt,"SW")==0){
            y-=sqrt(pow(k,2)/2);
            x-=sqrt(pow(k,2)/2);
        }else if(strcmp(drt,"SE")==0){
            y-=sqrt(pow(k,2)/2);
            x+=sqrt(pow(k,2)/2);
        }
    }
    printf("%.3f %.3f\n%.3f\n",x,y,sqrt(fabs(x*x)+fabs(y*y)));
    return 0;
}
