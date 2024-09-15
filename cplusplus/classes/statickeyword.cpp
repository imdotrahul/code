#include<iostream>
using namespace std;

// a static can variable can be accessed by the non static member function of the class
// a static function only have access to the static variables of the class

class Entity{
    public:
    static int x,y;
    static void functionn(){
        cout<<x<<y;
    }

};

int Entity:: x;
int Entity:: y;
int main()
{
    Entity::x=2;
    Entity::y = 3;
    Entity e1;
    Entity::x = 5;
    Entity::y = 6;

    Entity::functionn();
    Entity::functionn();

}