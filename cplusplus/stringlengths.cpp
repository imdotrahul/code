#include<iostream>
#include<string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);  //for fast input output
    cin.tie(0); cout.tie(0);


    string a,b;
    cout<<"Enter the first string: ";
    cin>>a;
    cout<<"Enter the second string: ";
    cin>>b;
    int stringlengtha=0, stringlengthb=0;

    // finding the length of first string
    for(int i=0;a[i]!='\0';++i)
    {
        stringlengtha++;
    }
    
    //finding the length of second string
    for(int k=0;b[k]!='\0';++k)
    {
        stringlengthb++;

    }
    
    cout<<"Length of first string is:- "<< stringlengtha<< "\n";
    cout<<"Length of second string is:- "<< stringlengthb<< "\n";

    return 0;

    
}