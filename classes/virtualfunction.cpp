#include<iostream>
using namespace std;

class Rahul{
    public:
        string name()
        {
            return "Rahul";
        }
};

class Yadav:public Rahul{
    private:
        string myname;
    public: 
        Yadav(string name){
            this->myname= name;
        }

        string name()
        {
            return myname;
        }

};

int main()
{

    Rahul r;
    cout<<r.name()<<" ";
    Yadav y("Rahul Yadav");

    cout<<y.name()<<" ";


}