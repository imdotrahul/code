#include<stdio.h>
int main()
{
    int t;
    char c;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%c\n",&c);
        if(c=='b'||c=='B')
        {
            printf("BattleShip\n");
        }
        else if(c=='c'||c=='C')
        {
            printf("Cruiser\n");
        }
        else if(c=='d'||c=='D')
        {
            printf("Destroyer\n");
        }
        else if(c=='f'||c=='F')
        {
            printf("Frigate\n");
        }
    }
    return 0;
}