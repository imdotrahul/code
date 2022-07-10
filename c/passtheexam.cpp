#include<iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int section1,section2,section3,sum;
        cin>>section1>>section2>>section3;
        sum = section1+section2+section3;

        if((section1>=10) && (section2>=10) && (section3>=10) && (sum>=100))
        {
            cout<<"PASS"<<"\n";
        }
        else{
            cout<<"FAIL"<<"\n";
        }

    }
}