#include<iostream>
using namespace std;

class A{
    private:
    int a =10;
    int b = 20;

    public:
    friend void log();

};

void log()
{
    A obj;
    cout<<obj.a<<obj.b;
}

int main()
{
    log();
}