#include<stdio.h>

int main()
{
    
    int t,n,arr[1000],i,j,k;

    scanf("%d",&t);
	int p,q;
    while(t--)
    {
	    scanf("%d",&n);
        q=1;
        arr[0]=1;
        for(j=2;j<=n;j++)
        {
            p=0;
            for(k=0;k<q;k++)
            {
                arr[k]=arr[k]*j+p;
                p=arr[k]/10;
                arr[k]=arr[k]%10;
            }
            while(p)
            {
	            arr[k]=p%10;
                k++;
                q++;
                p=p/10;
            }
        }
        for(i=q-1;i>=0;i--)
            printf("%d",arr[i]);

        printf("\n");
    }
    return 0;
}