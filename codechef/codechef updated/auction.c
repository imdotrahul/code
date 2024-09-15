#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int alice,bob,charlie;
        scanf("%d %d %d",&alice,&bob,&charlie);
        if(alice>bob &&alice>charlie)
        {
            printf("Alice\n");
        }
        else if (bob > charlie && bob > alice)
        {
            printf("Bob\n");
        }
        else if(charlie>alice && charlie > bob)
        {
            printf("Charlie\n");
        }
        
    }
    
}