#include<iostream>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        int left,right;
        cin>>left>>right;
        if(left%2 == 0)
        {
            left++;
        }
        cout<<(right-left+2)/4<<"\n";
    }
}