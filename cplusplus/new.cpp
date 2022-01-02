#include<iostream>

using namespace std;

int multiply(int a,int b)  
{
    int c=a*b;
    return c;
}  

int main ()
{
    int a;
    cin >> a;
    cout<<a<<"\n";
    int result = multiply(5,8);
    cout<<result<<"\n";
    
}
