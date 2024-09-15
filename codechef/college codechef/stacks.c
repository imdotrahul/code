#include <stdio.h>

int main(void) 
{
    int t;
    scanf("%d",&t);
    while (t!=0)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]>=a[c]) a[++c]=a[i];
            else
            {
                int x=a[i];
                int left=0;
                int right=c;
                while(right>left)
                {
                    int mid=left+(right-left)/2;
                    if(a[mid]>x) right=mid;
                    else left=mid+1;
                }
                a[left]=x;
                a[i]=0;
            }
        }
        printf("%d ",c+1);
        for(int i=0;i<=c;i++) printf("%d ",a[i]);
        printf("\n");
        t--;
    }
	return 0;
}

