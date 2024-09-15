#include<iostream>
using namespace std;

class Printable{
    public:
    virtual string getclassname()= 0;

};
class Entity:public Printable{
    public: 
        virtual string name()
        {
          
            return "Entity";
        }
        string getclassname()
        {
            return "Entity";
        }

};

class Player: public Entity{
    private:
        string na;
    public:
        Player(string nam)
        {
            na = nam;
        }

        string name() override
        {
            return na;
        }
        string getclassname()
        {
            return "Rahul";
        }

};

void print(Printable* obj)
{
    cout<<obj->getclassname()<<" ";
}

int main()
{
    Entity*e = new Entity();
    Player*p = new Player("cherno");

    print(e);
    print(p);
    


}