#include<iostream>
using namespace std;


class Entity{
    public:

    virtual string getname()
    {
        return "Entity";
    }
};

class Player : public Entity{
    private:
    string myname;

    public:
        Player(string name)
        {
            myname = name;
        } 

        string getname() override
        {
            return myname;
        }
};

void print(Entity*e)
{

    cout<<e->getname()<<" ";
}

int main()
{
    Entity* e= new Entity();
    Player*p = new Player("Cherno");
    print(e);
    print(p);
}