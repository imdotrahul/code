#include <stdio.h>

int main()
 {
    int n,arr[1000],i,b,g,sum=0;
    char gender;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    scanf("\n%c",&gender);
    if(gender==b)
    {
        for(i=0;i<n;i++)
        {
        if(i==0 || i%2==0)
        {
            sum=sum+arr[i];
        }
        
        i++;
        }
    }
    else if(gender==g)
    {
        for(i=1;i<n;i++)
        {
            if(i==0 || i%2!=0)
            {
            sum=sum+arr[i];
            }
            i++;
        }
    
    }
    printf("%d",sum);
    return 0;
}