#include<iostream>
using namespace std;

class Animal{
    public:
        void legs(){
            cout<<"Many Animals legs shown below:"<<"\n";

   }
    void legs(int n){
            cout<<"dogs have "<<n<<" legs"<<"\n";
        }
        void legs(int n, int hands){
            cout<<"dogs have "<<n<<" legs and "<<hands<<" hands"<<"\n";
        }
};

int main()
{
    Animal h;
    h.legs();
    h.legs(4);
    h.legs(2,2);

}