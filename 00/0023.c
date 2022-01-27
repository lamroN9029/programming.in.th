#include<stdio.h>
int main(){
    int i,d,m;
    int month[11]={31,28,31,30,31,30,31,31,30,31,30};
    char* day[7]={"Wednes","Thurs","Fri","Satur","Sun","Mon","Tues"};
    scanf("%d %d",&d,&m);
    for(i=0;i<m-1;i++)
        d+=month[i];
    for(i=0;i<7;i++)
        if(d%7==i)
            printf("%sday",day[i]);
    return 0;
}
