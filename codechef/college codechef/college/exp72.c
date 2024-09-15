#include<stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n>=0){
        printf("factorial of number %d is %d",n, factorial(n));
        
        }
    else 
    {
        printf("invalid number to find the factorial");
    }
   
}
 int factorial(int n)
 {
     if(n==0)
     return 1;
     else 
     return n*factorial(n-1);
 }