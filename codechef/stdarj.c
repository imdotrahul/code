#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        int one=0,zero=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]=='1')
            {
                one++;
            }
            else if(arr[i]=='0')
            {
                zero++;
            }
        }
        if(one==zero)
        {
            if(one%2==0)
            {
               printf("Bob\n");
  
            }
            else{
                printf("Alice\n");
            }
        }
        else if(one==n||zero==n)
        {
            printf("Bob\n");
        }
        else if(zero<one)
        {
            if(zero==1)
            {
                printf("Alice\n");
            }
            if(zero%2==0)
            {
                printf("Bob\n");
            }
            else
            {
                printf("Alice\n");
            }
        }
         else if(zero>one){
             if(one==1)
            {
                printf("Alice\n");
            }
            if(one%2==0)
            {
                printf("Bob\n");
            }
            else
            {
                printf("Alice\n");
            }
        }
    }
}