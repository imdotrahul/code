#include<iostream>
#include "multiplepoint.h"
using namespace std;

int print(int a)
{
    cout << a;
}

int main()
{
    int a = 10;
    int *b = &a;
    int **c=&b;
    int ***d=&c;
    int ****e=&d;

    int (*printvar) (int ) = print;
    cout << endl;
    printvar(5);
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
}