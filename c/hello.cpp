#include<stdio.h>
int main()
{    
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
        printf("%d",ans);
    }

}