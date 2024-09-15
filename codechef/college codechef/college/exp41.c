#include <stdio.h>
int main()
{
    int n,p,i;
    float m,x,profit=0,loss=0,total;
    printf("enter the total no. of items:");
    scanf("%d",&n);
    float item[n];
    printf("\n enter the price of each item");
    for(i=0;i<n;i++)
    {
        printf("%d :",i+1);
        scanf("%f",&item[i]);

    }
    printf("enter the no. of items sold in profit:");
    scanf("%d",&p);
    printf("enter the percentage of profit:");
    scanf("%f",&m);
    printf("enter the percentage of loss for remaining items:");
    scanf("%f",&x);
    for(i=0;i<p;i++)
    {
        profit+=(m*item[i])/100;
    }
    for(i=p;i<n;i++)
    {
        loss+=(x*item[n])/100;
    
    }
    total=profit-loss;
    if(total>0)
    {
        printf("salesman get rs. %.2f profit",total);
    }
    else if (total<0)
    {
        printf("salesman get rs. %.2f loss",total*-1);
    }
    else
    {
        printf("salesman got neither profit nor loss");

    }
    return 0;
       
}