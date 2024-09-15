#include<stdio.h>
int main()
{
    int m,n,d,i,temp,count=0;
    printf("starting number:");
    scanf("%d",&m);
    printf("enter the last number:");
    scanf("%d",&n);
    printf("enter the digit you want to count:");
    scanf("%d",&d);
    for(i=m;i<=n;i++)
    {
        temp=i;
        while(temp)
        {
            if(d==(temp%10))
            count++;
            temp/=10;
        }

    }
    printf("in the given series, repetition of %d is %d times",d,count);
    return 0;
}