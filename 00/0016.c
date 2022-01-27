#include<stdio.h>
int main()
{
    int i,sc[3]={0},max=0;
    char *name[3]={"Adrian","Bruno","Goran"};
    scanf("%d",&i);
    char ch[i+1];
    scanf("%s",ch);
    for(i=0;ch[i];i++)
    {
        switch((i+1)%3)
        {
            case 1:
                ch[i]=='A'? sc[0]++:1 ;
                break;
            case 2:
                ch[i]=='B'? sc[0]++:1 ;
                break;
            case 0:
                ch[i]=='C'? sc[0]++:1 ;
        }
        switch((i+1)%4)
        {
            case 1:
            case 3:
                ch[i]=='B'? sc[1]++:1 ;
                break;
            case 2:
                ch[i]=='A'? sc[1]++:1 ;
                break;
            case 0:
                ch[i]=='C'? sc[1]++:1 ;
        }
        switch((i+1)%6)
        {
            case 1:
            case 2:
                ch[i]=='C'? sc[2]++:1 ;
                break;
            case 3:
            case 4:
                ch[i]=='A'? sc[2]++:1 ;
                break;
            case 0:
            case 5:
                ch[i]=='B'? sc[2]++:1 ;
        }
    }
    for(i=0;i<3;i++)
        if(sc[i]>max)
            max=sc[i];
    printf("%d",max);
    for(i=0;i<3;i++)
        if(max==sc[i])
            printf("\n%s",name[i]);
    return 0;
}
