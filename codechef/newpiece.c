#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i1,j1,i2,j2;
        scanf("%d %d %d %d",&i1,&j1,&i2,&j2);
        int result=0,difference=0;
        result=i1+i2;
        difference=j1+j2;
        
        if(i1==i2&&j1==j2)
        {
            printf("0\n");
        }
        else if(result%2==0&&difference%2==0)
        {
            printf("2\n");

        }
        else if(result%2==1&&difference%2==1)
        {
            printf("2\n");

        }
        else{
            printf("1\n");
        }
        

    }
}