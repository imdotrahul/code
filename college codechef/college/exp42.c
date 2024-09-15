#include<stdio.h>
int main()
{
    int p,i;
    printf("enter no.:");
    scanf("%d",&p);
    if(p>999999)
    {
        printf("invalid");
    }
    else
    {
        
            for(i=999999;;i--)
            {
                if(i%p==0)
                {
                    printf("%dis 6-digit greatest number divisible by%d\n",i,p);
                    printf("%dis 7-digit greayest number divisible by%d\n",i+p,p);
                    break;
                }
            }
    }
    return 0;
    
}