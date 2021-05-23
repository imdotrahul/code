#include <stdio.h>
#include<math.h>

int main(void) {
	// your code goes here
	int a[1000000];
	long long n;
	int x=1;
	scanf("%lld",&n);
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	while(x<n){
	    for(int i=0;i<n-x;i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            int temp=a[i];
	            a[i]=a[i+1];
	            a[i+1]=temp;
	        }
	        
	    }
	    x++;
	}
	for(int i=0;i<n;i++)
	{
	    printf("%d\n",a[i]);
	}
	return 0;
}

