#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int n,i;
    printf("Enter ni of customers:");
    scanf("%d",&n);
    float principal[n], time[n],r, interest=0;
    printf("Enter annual rate of interest:");
    scanf("%f",&r);
    printf("\n ******Enter customer data******\n");
    for (i=0;i<n;i++)
    {
        printf("customer%d\n",i+1);
        printf("Principal ammount:");
        scanf("%f",&principal[i]);
        printf("Time period:"); 
        scanf("%f",&time[i]);
        
    }
    for(i=0;i<n;i++)
    {
        interest+=principal[i]*(pow((1+(r/(100))),time[i])-1);
    }
printf("\nTotal interest earned by bank from all customers:%2f",interest);
return 0;
}


