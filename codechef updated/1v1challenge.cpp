#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
        if(x==y)
        {cout<<"0"<<"\n";}
	    int z = 0;
	    z = y/x;
	    cout<<z<<"\n";
	}
	return 0;
}