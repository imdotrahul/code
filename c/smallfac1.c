#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j,sumright=0,sumleft=0,difference=0;
    scanf("%d",&n);
    int arr[n][n];
    for (i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sumright=sumright+arr[i][i];
    }
    for(i=0;i<n;i++)
    {
        sumleft=sumleft+arr[i][n-1-i];
    }
    difference=sumright-sumleft;
    printf("%d",abs(difference));
    return 0;
}
    