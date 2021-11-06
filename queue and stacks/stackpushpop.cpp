#include<iostream>
#include <stack>
using namespace std;

using namespace std;
void display(stack<char> &a,int count)
{
    for (int i = 0; i < count; i++)
    {
        cout<<a.top()<<" ";
        a.pop();
    }
    
}

int main()
{
    stack<char>a;
    int count = 0;

    a.push('A');
    count++;
    a.push('B');
    count++;
    a.push('C');
    count++;
    a.push('D');
    count++;
    a.push('E');
    count++;
    a.push('F');
    count++;
    display(a,count);
    

    a.pop();
    count--;
    a.pop();
    count--;
    display(a,count);

    a.push('G');
    count++;
    a.push('H');
    count++;
    display(a,count);

    a.pop();
    count--;
    a.pop();
    count--;
    a.pop();
    count--;
    a.pop();
    count--;
    display(a,count);

    a.push('I');
    count++;
    display(a,count);

}