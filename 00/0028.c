#include<stdio.h>
#include<string.h>
//int a[5][5]={0};
typedef struct{
    char name[21];
    int score;
}TEAM;
/*void table(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}*/
void board(TEAM *team){
    for(int i=0;i<4;i++)
        printf("%s %d\n",team[i].name,team[i].score);
}
void swapname(char *a,char *b){
    char str[21];
    strcpy(str,a);
    strcpy(a,b);
    strcpy(b,str);
}
int main(){
    int i,j,tmp,a[5][5]={0};
    char str[21];
    TEAM team[4];
    for(i=0;i<4;i++){
        scanf("%s",team[i].name);
        team[i].score=0;
    }
    for(i=0;i<4;i++)
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
            a[i][4]+=a[i][j];
            a[4][j]+=a[i][j];
        }
    //table();
    for(i=0;i<4;i++)
        for(j=0;j<4;j++){
            if(i==j) continue;
            else if(a[i][j]>a[j][i])
                team[i].score+=3;
            else if(a[i][j]==a[j][i])
                team[i].score++;
            }
    //board(team);
    for(i=0;i<4;i++)
        for(j=i+1;j<4;j++){
            if(team[i].score<team[j].score){
                tmp=team[i].score;
                team[i].score=team[j].score;
                team[j].score=tmp;
                swapname(team[i].name,team[j].name);
                /*strcpy(str,team[i].name);
                strcpy(team[i].name,team[j].name);
                strcpy(team[j].name,str);*/
            }else if(team[i].score==team[j].score){
                if(a[i][4]-a[4][i]<a[j][4]-a[4][j])
                    swapname(team[i].name,team[j].name);
                else if(a[i][4]-a[4][i]==a[j][4]-a[4][j]){
                    if(a[i][4]<a[j][4])
                        swapname(team[i].name,team[j].name);
                }
            }
        }
    board(team);
    return 0;
}
