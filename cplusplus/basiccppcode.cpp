#include <iostream>
using namespace std;

class car {

    int tire, engine;

    public:
     car()
     {
        tire = 4;
        engine = 1;
     }
     car(int a, int b) 
     {
        tire = a;
        engine = b;
    
    }
    
     void display ()
     {
        cout<<tire << engine;
     }
     
};
 
int main()
{
    car c1; //object for car 1
    car c2(10,20); // object for car 2
    c1.display();
    c2.display();

}