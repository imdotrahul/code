#include<iostream>
using namespace std;

class livingbeing{
    public:
        int leg = 2;
        int hand = 2;

};

class legs:public livingbeing{
    public:
        legs()
        {
            cout<<"legs constructor called "<<leg<<"\n";
        }
};
class hands: public livingbeing{
    public:
        hands(){
            cout<<"hands constructor called "<<hand<<"\n";
        }
};

class human : public legs,public hands{
    public:
    human(){
        cout<<"human have "<<legs::leg<<"legs and "<<hands::hand<<"hands";}
};

int main()
{
    human h;
}