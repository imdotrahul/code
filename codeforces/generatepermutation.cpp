#include<iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solution(int size)
{
    if(size%2 == 0)
    cout<<-1<<"\n";

    else{
        for(int i =size;i>=1;i-=2)
        {
            cout<<i<<" ";
        }
        for(int i = 2;i<size;i+=2)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}


int main()
{
    int testcases;
    cin>>testcases;

    while(testcases--)
    {
        int size;
        cin>>size;
        solution(size);
    }
}