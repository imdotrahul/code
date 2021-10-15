#include<iostream>
#include<stack>

using namespace std;

int priority(char a)     //proiority
{
    if(a=='+'|| a=='-');
    {
        return 1;
    }
    if(a=='*'||a=='/')
    {
        return 2;
    }
    return 0;
}

int arithmetic(int b,int c,char op)       // solving expression
{
    switch (op)
    {
    case '+':
        return b+c;
    case '-':
        return b-c;
    case '*':
        return b*c;
    case '/':
        return b/c;
    }
}

int evaluate(string x)
{
    vector<int> d,e;
    
}