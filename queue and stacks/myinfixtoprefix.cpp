#include<iostream>
#include<stack>
using namespace std;


char stak[50];
int top =-1;

void push(char x)
{
    stak[++top]=x;
}
char pop()
{
    if(top == -1)
    {
        return -1;
    }
    else{
        return stak[top--];
    }
}
int priority(char x)
{
    if(x=='(')
    return 0;
    if(x=='+'|| x=='-')
    return 1;
    if(x=='*' || x=='/')
    return 2;
}

int main()
{
    char example[50];
    char* p, x;
    printf("Enter the postfix expression :  ");
    scanf("%s",example);
    p = example;
    while( *p != '\0')
    {
        if(isalnum(*p))
        {
            printf("%c",*p);
        }
        else if(*p=='(')
        {
            push(*p);
        }
        else if(*p==')')
        {
            while((x=pop()) != '(')
            {
                printf("%c",x);
            }
        }

        else{
            while(priority(stak[top])>=priority(*p))
            {
                printf("%c",pop());
            }
            push(*p);
        }
        p++;
    }
    while(top!= -1)
    {
        printf("%c",pop());
    }

}
