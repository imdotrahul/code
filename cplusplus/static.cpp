#include <iostream>
using namespace std;

class Entity{
    public:
    static int a;
    static int b;

    void print()
    {
        cout<<a<<b;
    }

    
};

int main()
{
    Entity e;
   
    e.print();
    
}