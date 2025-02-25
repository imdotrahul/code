#include<iostream>
using namespace std;


class cookie {
    private:
    bool userdefaultshape;
    string defaultshape = "ma chumda shape";
    public:
        void welcome()
        {
            cout<<"hello define the shape of your cookie"<<"\n";
        }
        string shape(string providedshape)
        {
            cout<<"if you want to use default shape press 1 else press 0: ";
            cin>>userdefaultshape;

            if(userdefaultshape)
            {
                return defaultshape;
            }
            else{
                return providedshape;
            }
        }


};

int main()
{
    cookie c1;
    c1.welcome();
    cout<<c1.shape("boba tea shape");
}