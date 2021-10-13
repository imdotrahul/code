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
    cout<<" The elements in the linked list are \n";
    while(ptr !=NULL)
    {
        cout<<ptr->data<<"  ";
        ptr=ptr->next;
    } 
    cout<<"\n";

}
int  checknumber(node*head,int number)    //check the count of the number
{
    int a=0;
    node* ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->data==number)
        {
            a++;
        }
        ptr=ptr->next;
    }
    return a;
}
int main()
{
    int n;
    cout << "Enter the no of nodes: ";
    cin >> n;
    node* head = NULL;
    while(n--) {
        int data;
        cout << "Enter data for node: ";
        cin >> data;
        head=createNode(data, head);
    }
    display(head);
    int number;
    cout<<"Enter the number to be counted: ";
    cin>>number;
    int count;
    count =  checknumber(head,number); 
    cout<<count;
}