#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node* createNode(int data, node *head) //node creation
{
    node *n = new node();
    n->data = data;
    n->next = NULL;
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = n;
    }
    return head;
}
void display(node* head)  
{
    node* ptr=head;
    while(ptr !=NULL)
    {
        cout<<ptr->data<<" | "<<ptr->next<<"-->";
        ptr=ptr->next;
    } 

}
node* insertnode(node*head,int number)   // insertion at beginning
{
    node* p = new node();
    p->data=number;
    p->next = head;
    head = p;
    return head;
    
}

node* deletenode(node*head, int position)
{
    node*ptr=head;
    int n=position-1;
    while(n>0)
    {
        ptr=ptr->next;
    }
    ptr=
}

int main()
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
        head = createNode(data, head);
    }
    display(head);
    int x;
    cout<<"enter the data to add in the number: ";
    cin>>n;
    head = insertnode(head,x);
    display(head);

    

}