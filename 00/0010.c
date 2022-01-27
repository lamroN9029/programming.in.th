#include<stdio.h>
int main()
{
    int i,n=1;
    char a[51];
    scanf("%s",a);
    for(i=0;a[i];i++)
    {
        switch(a[i]){
            case 'A':
                if(n==1) n=2;
                else if(n==2) n=1;
                break;
            case 'B':
                if(n==2) n=3;
                else if(n==3) n=2;
                break;
            case 'C':
                if(n==1) n=3;
                else if(n==3) n=1;
        }
    }
    printf("%d",n);
    return 0;
}
