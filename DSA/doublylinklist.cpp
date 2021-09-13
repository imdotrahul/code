#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* previous;
    Node* next;

};
Node* createnode(int data,Node* head)
{
    Node* n=new Node();
    n->data=data;
    n->next=NULL;
    n->previous=NULL;
    if(head==NULL)
    {
        head=n;
    } 
    else
    {
        Node*ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=n;
    }
    return head;;;;;
}

int main() {
    
    
    return 0;
}