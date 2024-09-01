#include<iostream>
using namespace std;

class legs{
    public:
        legs()
        {
            cout<<"legs constructor called \n";
        }
};
class hands{
    public:
        hands(){
            cout<<"hands constructor called \n";
        }
};

class human : public legs,public hands{
    public:
    human(){
        cout<<"human constructor called \n";}
};

int main()
{
    human h;
}