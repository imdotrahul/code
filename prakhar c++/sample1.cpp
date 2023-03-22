#include<iostream>
using namespace std;

int main()
{
    for(int i = 1;i<row;i++)
    {
        for(int j = 1;j<column;j++)
        {
            int rowcolumn = i+j;
            if(rowcolumn%2==0)
            {
                cout<<"X";
            }
            else{
                cout<<"0";
            }
        }
    }
}