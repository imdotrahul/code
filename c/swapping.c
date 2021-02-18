#include<stdio.h>
int main()
{
    int a,b,temp;
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("swap of a is %d anf of b is %d",a,b);
    return 0;

}