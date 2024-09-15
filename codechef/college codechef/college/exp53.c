#include <stdio.h>
int main()
{
    int n,i,j ;
    printf("enter the number of goods:");
    scanf("%d",&n);
    float cost[n],x,y,p,total=0;
    printf("enter the cost of %d goods:\n",n);
    for(int i=0;i<n;i++)
    {
        printf("%d:",i+1);
        scanf("%f",&cost[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(cost[j]<cost[i])
            {
                cost[j]+=cost[i];
                cost[i]=cost[j]-cost[i];
                cost[j]-=cost[i];
            }
        }
    }
    printf("loss on most expensive things:");
    scanf("%f",&x);
    printf("gain on cheapest things:");
    scanf("%f",&y);
    if(n>2)
    {
        printf("gain on rest of the things:");
        scanf("%f",&p);
    }
    for(int i=0;i<n;i++)
    {
        if(cost[n-1]==cost[i])
        total+=(y*cost[i])/100;
        else if(cost[0]==cost[i])
        total-=(x*cost[i])/100;
        else
        total=(p*cost[i])/100;
        
    }
    if(total<0)
    printf("rs. %2f loss on goods",total*-1);
    else if(total>0)
    printf("rs. %2f gain on goods:",total);
    else
    printf("neither gain nor loss on goods");

    return 0;
    
}