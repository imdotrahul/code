#include <stdio.h>
#include<math.h>
int main()
{
    int t,i,k,temp;
	scanf("%d",&t);
	int n[t],j,a=0;
	int arr[1000];
	for(i=0;i<t;i++)
	{
		scanf("%d",&n[i]);
		
	}
	for(i=0;i<t;i++){
	    j=n[i];
		if(j<=1){
			printf("1\n");
		}
		else{
			arr[temp]=j*(j-1);
			for(k=(j-2);k>0;k--)
		    {
		        arr[temp]=arr[temp]*k;
		        
		    }
			while(arr[temp]!=0)
			{
				int remainder[]={'\0'};
				remainder[a]=arr[temp]%10;
				printf("%d",remainder[a]);
				a=a+1;
			}

			
		    	
		}

		
	    
	}
	return 0;

}
