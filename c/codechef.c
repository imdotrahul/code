#include<stdio.h>

int main()
{
    int rows;
    scanf("%d",&rows);
    int x = (2*rows)-1;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=x;i++)
        {
            printf("%(rows-i)d");
            printf("*");
        }
    }
}