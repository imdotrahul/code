#include<iostream>
#include<stack>

using namespace std;

int priority(char a)     //proiority
{
    if(a=='+'|| a=='-')
    {
        return 1;
    }
    if(a=='*'||a=='/')
    {
        return 2;
    }
    return 0;
}

int arithmetic(int b,int c,char op)       // basic simplificatiohn 
{
    switch (op)
    {
    case '+':
        return b+c;
    case '-':
        return b-c;
    case '*':
        return b*c;
    case '/':
        return b/c;
    }
}

int evaluate(string x)
{
    stack<int> values;
    stack <char> ops;
    for(int i=0;i<x.length();i++)
    {
        if(x[i]==' ')
        {
            continue;
        }
        else if(x[i]=='(')
        {
            ops.push(x[i]);
        }
        else if(isdigit(x[i]))
        {
            int val = 0;
            while(i<x.length() && isdigit(x[i]))
            {
                val=(val*10)+(x[i]-'0');
                i++;
            }
            values.push(val);
            i--;
        }
        else if(x[i]==')')
        {
            while(!ops.empty() && ops.top()!= '(')
            {
                int d = values.top();
                values.pop();
                int e = values.top();
                values.pop();

                char f = ops.top();
                ops.pop();
                values.push(arithmetic(e,d,f));
            }
            if(!ops.empty())
            {
                ops.pop();
            }
        }
        else{
            while(!ops.empty()&& priority(ops.top())>= priority(x[i]))
            {
                int d = values.top();
                values.pop();
                int e = values.top();
                values.pop();

                char f = ops.top();
                ops.pop();
                values.push(arithmetic(e,d,f));
            }
            ops.push(x[i]);
        }

    }   
    while(!ops.empty())
    {
        int d = values.top();
        values.pop();
        int e = values.top();
        values.pop();

        char f = ops.top();
        ops.pop();
        values.push(arithmetic(e,d,f));
    }
    return values.top();

}
int main()
{
    int x=16,y=4,z=1;
    cout<<evaluate("((x-y)*z) / (x-(y/z)) ")<<"\n";
    return 0;
}