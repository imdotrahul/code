#include<iostream>
using namespace std;

class Entity{

    private:
    static string name = "Rahul Yadav";
    static int age = 21;
    public:

    void print()
    {

        cout<< name <<" "<<age<<" ";
    }
    friend void friendfunction(Entity&e);
};

void friendfunction(Entity&e)
{
    e.name = "Jatin";
    e.age = 25;
    
}

int main()
{
    Entity e;
    e.print();
    friendfunction(e);
    e.print();

}