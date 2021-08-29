#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next = NULL;
};

void createNode(int data, Node* head) {
    Node* n;
    n->data = data;
    if (head == NULL) {
        head = n;
    }
    else {
        Node* ptr = head;
        while(ptr != NULL) {
            ptr = ptr->next;
        }
        ptr = n;
    }

}

void display(Node* head) {
    Node* ptr = head;
    while(ptr != NULL) {
        cout << ptr->data << " | " << ptr->next << " --> ";
    }
}

int main()
{
    int n;
    cout << "Enter the no of nodes: ";
    cin >> n;
    Node* head = NULL;
    while(n--) {
        int data;
        cout << "Enter data for node: ";
        cin >> data;
        createNode(data, head);
    }
    display(head);
}
