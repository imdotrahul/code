#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,temp;
    scanf("%d",&n);
    int arr[10000];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    for(i=(n-1);i>=0;i--)  
    {
        printf("%d ",arr[i]);
    } 
    return 0;
}
