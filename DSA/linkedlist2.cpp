#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
};
node* createNode(int data, node *head)
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
    

}