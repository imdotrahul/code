#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() {
    int n, k,arr[1000][1000],i,j,and[1000] ,or[1000],xor[1000];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            and[i]=arr[i][j]&&arr[i][j+1];
            scanf("%d",&and[i]);
            printf("%d",and[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            or[i]=arr[i][j]&&arr[i][j+1];
            scanf("%d",&or[i]);
            printf("%d",or[i]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            xor[i]=arr[i][j]&&arr[i][j+1];
            scanf("%d",&xor[i]);
            printf("%d",xor[i]);
        }
    }
    
 
    return 0;
}
