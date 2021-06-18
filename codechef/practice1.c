#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,r=0;
        scanf("%d",&n);
        char str[n];
        scanf("%s",str);
        for(int i=0;i<=n;i++)
        {
            if(str[i]=='I')
            {
                r=1;break;
            }
            else if(str[i]=='Y')
            {
                r=2;break;
            }
        }
        if(r==1)
        {
            printf("INDIAN\n");
        }
        else if(r==2)
        {
            printf("NOT INDIAN\n");
        }
        else if(r==0)
        {
            printf("NOT SURE\n");
        }
    }
  return 0;
}