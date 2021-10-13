#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
struct node * head;

node* createnode(node*head,int data)
{
    node* n=new node();
    n->data=data;
    n->next=NULL;
    

}
int main ()
{

}