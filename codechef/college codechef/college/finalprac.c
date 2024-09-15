#include<stdio.h>

int main()
{
    int* ptr;
    
    int a=4; int &b=a; 
    ptr=&a;
    printf("%d",b);
    printf("\n%d",*ptr);
    return 0;
}