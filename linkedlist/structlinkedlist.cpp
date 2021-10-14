#include<iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};
struct node * head;

node* createnode(node*head,int data)  //create node
{
    node* n=new node();
    n->data=data;
    n->next=NULL;
    if(head==NULL)
    {
        head=n;
    }
    else{
        node*ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=n;
    }
    return head;
}
node* beginning(node*head,int data) //insertion at beginning
{
    node*p= new node();
    p->next=head;
    p->data=data;
    head=p;
    return head;
}
node*last(node*head, int data)  // insertion in last
{
    node* d =new node();
    d->data= data;
    node *ptr=head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
    ptr=d;
    return head;
}
node* between(node*head,int data,int loc)   //insert at given location
{
    node*b=new node();
    node * ptr=head;
    node*temp=NULL;
    while(loc>0)
    {
        ptr=ptr->next;
        loc--;
    }
    temp=ptr->next;
    ptr=b;
    b->data=data;
    b->next=temp;
    return head;
}
node* deleteitem(node*head,int data,int loc)   //delete at a location
{
    node*ptr=head;
    node* temp=NULL;
    while(loc--)
    {
        ptr=ptr->next;
    }
    temp=ptr->next;
    temp=temp->next;
    ptr->next=temp;
    return head;
}
node* reverse(node*p)  //reverse a link list
{
    if(p->next==NULL);
    {
        head=p;
        return p; 
    }
    reverse(p->next);
    node* ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=NULL;

    ptr=p;
    return head;
    
}

void display(node* head)  //display link list
{
    node* ptr=head;
    while(ptr !=NULL)
    {
        cout<<ptr->data<<" | "<<ptr->next<<"-->";
        ptr=ptr->next;
    } 

}
int main ()
{
    int n;
    cout<<"Enter the number of nodes: ";
    cin >> n;

    node* head = NULL;
    while (n--)
    {
        int data;
        cout<<"Enter the data to be entered: ";
        cin >> data;
        head = createnode(head, data);
    }
    display(head);
     node* revers=NULL;
     revers=reverse(head);

     display(revers);
    

}