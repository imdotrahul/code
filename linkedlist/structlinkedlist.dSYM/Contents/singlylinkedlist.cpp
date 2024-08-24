#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;

};
node* Linklist(node *head, int data)//create linkedlist
{
    node* n = new node();
    n->data = data;
    n->next = NULL;

    if(head == NULL)
    {
        head = n;
    }
    
    else{
        node*ptr = head;
        while(ptr->next!=NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = n;

    }
    return head;
}

node* insertion(node*head, int data)//insert at beginning
{
    //in the beginning
    node* n = new node();
    n->data = data;
    n->next= head;
    head = n;
    return head;
 
}
node* insertatapos(node*head,int data,int pos) //insert at a position in linked list
{
    node*n = new node();
    n->next = NULL;
    n->data = data;
    node*ptr = head;

    int counter = 1;

    while(counter != pos&& ptr!=NULL)
    {
        if(counter == pos)
        {
            n->next = ptr->next;
            ptr->next = n;

        }
        ptr= ptr->next;
        if(ptr->next ==NULL)//if the position is at last
        {
            ptr->next = n;
        }
        counter++;

    }
    return head;

}

void printlinklist(node*head)//print linkedlist
{
    node*n = head;

    while(n != NULL)
    {
        cout<<n->data<<" ";
        n = n->next;
    }

}


int main()
{

    int n;
    cin>>n;
    node*head = NULL;

    while(n--)
    {
        int number;
        cout<<" enter the number ";
        cin>>number;
        head = Linklist(head,number);

    }

    printlinklist(head);

    int insert;
    cout<< "add number to inset at beginning ";
    cin>> insert;
    head = insertion(head,insert);
    printlinklist(head);

    int position;
    cout<<"insert position ";
    cin>>position;
    int num;
    cout<<"insert num ";
    cin>>num;
    head = insertatapos(head,num,position);

    printlinklist(head);

    


}