#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int player1[n],player2[n];
    for(int i=0;i<n;i++)
    {
        cin>>player1[i]>>player2[i];
    }

    int playerA=0,playerB=0,winner,lead=0,previous=0,max1;

    for (int i = 0; i < n; i++)
    {
        playerA = playerA+player1[i];
        playerB = playerB + player2[i];

        lead = abs(playerA-playerB);

        max1 = max(lead,previous);

        if((playerA-playerB)>=0 && lead>previous)
        {
            winner = 1;
        }
        if((playerA-playerB)<=0 && lead>previous)
        {
            winner = 2;
        }
        previous = max1;

    }
    cout<<winner<<" "<<max1;
    
}