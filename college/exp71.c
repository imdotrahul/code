#include<stdio.h>
int max_of_four(int a, int b, int c, int d)
{
    if(a>b && a>c && a>d)
    return a;
    else if(b>c && b>d)
    return b;
    else if(c>d)
    return c;
    else
    return d;    
}
int main()
{
    int a,b,c,d;
    printf("enter 4 numbers: \n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("largest out of 4 numbers is: %d",max_of_four(a,b,c,d));
    return 0;
}