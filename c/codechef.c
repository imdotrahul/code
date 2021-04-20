#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main() {
    int n,i,j,var;
    scanf("%d",&n);
    for(i=1;i<n;++i)
    {
        var=0;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                var=1;
                break;
                }
            }
            if(var==0)
            printf("%d ",i);}    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}