#include <iostream>
#include<algorithm>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};
void insertAttail(Node **head, int value)
{
    Node *n = new Node(value);
    if (*head == NULL)
    {
        *head = n;
        return;
    }
    Node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }cout<<endl;
}
Node *mergeTwolist(Node *head1, Node *head2)
{
    Node *temp = head1;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = head2;
    return head1;
}

int main()
{
    Node *head1 = NULL;
    Node *head2 = NULL;
    int n;
    cin >> n;
    int element;
    for (int i = 0; i < n; i++)
    {
        cin >> element;

        insertAttail(&head1, element);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> element;

        insertAttail(&head2, element);
    }
    Node *head3 = mergeTwolist(head1, head2);
    printList(head3);
    printList(head1);

    return 0;
}