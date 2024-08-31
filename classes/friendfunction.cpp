#include<iostream>
using namespace std;

class Entity{

    private:
    static string name;
    static int age;
    public:

    void print()
    {

        cout<< name <<" "<<age<<" ";
    }
    friend void friendfunction();
    friend class Log;
};

void friendfunction()
{
    Entity::name = "Jatin";
    Entity::age = 25;
    
}

class Log{
    private:
    int a = 10;
    int b = 20;

    public:

    void display(Entity& e){
        cout<<e.age<<" "<<e.name<<" "<<a<<" "<<b<<" ";
    }
};
string Entity::name;
int Entity::age;


int main()
{
    Entity e;
    e.print();
    friendfunction();
    e.print();
    cout<<"\n";

    Log l;
    l.display(e);

}