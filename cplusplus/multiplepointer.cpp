#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int *b = &a;
    int **c=&b;
    int ***d=&c;
    int ****e=&d;

    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
}