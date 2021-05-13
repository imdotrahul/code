#include<stdio.h>
int factorial(int n)
{
    return n*factorial(n-1);
}
int main()
{
    int t,i,a,result;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        if(a==0 || a==1)
        printf("1\n");
        else
        result= factorial(a);
        printf("%d\n",result);

    }
    return 0;
}
