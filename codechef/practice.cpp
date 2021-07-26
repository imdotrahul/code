#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long t,g,c;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long answer=0;
        cin>>g>>c;
        answer=(c*c)/(2*g);
        cout<<answer<<endl;

    }
    return 0;
}