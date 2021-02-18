#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,total;
    scanf("%d",&n);
    int arr[]={n};
    scanf("%d",arr[n]);
    for(i<=0;i<n;i++)
    {
        total=arr[0]+arr[1];
        arr[i++];
    }
    printf("%d",total);


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}