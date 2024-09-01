#include<iostream>
using namespace std;

class Entity{
    private:
        int a;
        int b;
    public:
        Entity(int a,int b){
            this->a =a ;
            this->b = b;
        }
        void log()
        {
            cout<< a <<" "<<b;
        }

};


int main()
{
    Entity e(5,3);
    e.log();
    
}