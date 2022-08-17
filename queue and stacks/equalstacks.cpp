#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

int main()
{
    stack <int> a;
    stack<int> b;
    stack<int> c;
    stack<int> a1;
    stack<int> b1;
    stack<int> c1;
    

    int n1,n2,n3; //size of stacks
    cin>> n1>>n2>>n3;

    int h1=0,h2=0,h3=0;

    for(int i =0;i<n1;i++)
    {
        int x;
        cin>>x;                     // elements of stack 1
        a.push(x);
        h1 += x;
    }
    for(int i =0;i<n2;i++)
    {
        int x;
        cin>>x;                        // elements of stack 2
        b.push(x);
        h2 += x;
    }
    for(int i =0;i<n3;i++)
    {
        int x;
        cin>>x;                     //elements of stack 3
        c.push(x);
        h3 += x;
    }
    for(int i =0;i<n1;i++)
    {
        a1.push(a.top());
        a.pop();
    }
    for(int i =0;i<n2;i++)
    {
        b1.push(b.top());
        b.pop();
    }
    for(int i =0;i<n3;i++)
    {
        c1.push(c.top());
        c.pop();
    }

    bool  equalheight = false;  // check if heights are equal or not

    if(h1==h2 && h2==h3)
    {
        equalheight = true;         // if all the heights are equal then keep it true else run the while loop 
    }

    while(!equalheight)         //start the tallest stack to remove elements remember 0 is also a height
    {
        if(h1 >= h2 && h1 >= h3) {
            h1 -= a1.top();
            a1.pop();
        } else if(h2 >= h1 && h2 >= h3) {
            h2 -= b1.top();
            b1.pop();
        } else if(h3 >= h1 && h3 >= h2) {
            h3 -= c1.top();
            c1.pop();
        }
        if((h1 == h2 && h2 == h3) || (h1 == 0 && h2 == 0 && h3 == 0)) {
            equalheight = true;
        }
    }
    cout<<h1;
}