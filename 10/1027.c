#include<stdio.h>
int main(){
    int i,j,min,cnt,check,tmp,winner=0,a[7]={0};
    char str[10001],b[7]="ABCDEFG",tmpch;
    while(1){
        scanf(" %s",str);
        if(str[0]=='!') break;
        for(i=0;str[i];i++)
            a[str[i]-'A']++;
        if(winner==1) continue;
        for(i=0,min=10001;i<7;i++)
            if(a[i]<min){
                min=a[i];
                check=i;
            }
        for(i=0,cnt=0;i<7;i++)
            if(a[i]==min)
                cnt++;
        if(cnt>1) continue;
        a[check]=30001;
        for(i=0,cnt=0;i<7;i++)
            if(a[i]<=30000){
                cnt++;
                tmp=i;
            }
        if(cnt==1)
            winner=1;
    }
    for(i=0;i<6;i++)
        for(j=i+1;j<7;j++){
            if(a[i]==a[j]&&b[i]>b[j]){
                tmpch=b[i];
                b[i]=b[j];
                b[j]=tmpch;
            }
            else if(a[i]<a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
                tmpch=b[i];
                b[i]=b[j];
                b[j]=tmpch;
            }
        }
    for(i=0,cnt=0;i<7;i++)
        if(a[i]<=30000)
            cnt++;
    printf("%d\n",cnt);
    for(i=0,cnt=0;i<7;i++)
        if(a[i]<=30000)
            printf("%c %d\n",b[i],a[i]);
    return 0;
}
