#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    char s[n];
	    scanf("%s",s);
	    int i,p,c,count=0,f=0,j;
	i=0;j=0;
	int power=0;
	while(i<n&&j<n)
	{
	    c=0;
	    if(s[i]=='M')
	    {
	        if (s[j]=='I')
	        {
	            if(j>i)
	            {
	         for(p=i;p<j;p++)
	         {
	             if(s[p]==':')
	             c++;
	         }
	            }
	            else
	            {
	                    for(p=j;p<i;p++)
	         {
	             if(s[p]==':')
	             c++;
	         }
	            }
	            
	         power=k+1-abs(j-i)-c;
	         if(power>0)
	         {
	             i++;
	             j++;
	             count++;
	         }
	         else
	         {
	             if(i>j)
	             j++;
	             else
	             i++;
	         }
	        }
	        
	        else if(s[j]=='X')
	    {
	        j++;
	        i=j;
	    }
	        
	        else
	        j++;
	    }
	    else if(s[i]=='X')
	    {
	        i++;
	       j=i;
	    }
	    else
	    i++;
	    
	}
	    printf("%d\n",count);
	}
	
	return 0;
}