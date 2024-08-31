#include<iostream>
using namespace std;

class Entity{
    public:
    static int x,y;
    static void functionn(){
        cout<<x<<y;
    }

};


int main()
{
    Entity e;
    e.x=2;
    e.y = 3;
    Entity e1;
    e1.x = 5;
    e1.y = 6;

    e.functionn();
    e1.functionn();

}