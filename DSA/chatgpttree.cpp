#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        this->data = val;
        this->left = this->right = NULL;
    }
};

Node* insert(Node* head, int val) {
    if (head == NULL) {
        return new Node(val); // Create a new node if tree is empty
    }
    if (val > head->data) {
        head->right = insert(head->right, val);
    } else {
        head->left = insert(head->left, val);
    }
    return head;
}

void Inorder(Node* head) {
    if (head == NULL) {
        return;
    }
    Inorder(head->left);
    cout << head->data << " ";
    Inorder(head->right);
}

void Preorder(Node* head) {
    if (head == NULL) {
        return;
    }
    cout << head->data << " ";
    Preorder(head->left);
    Preorder(head->right);
}

void Postorder(Node* head) {
    if (head == NULL) {
        return;
    }
    Postorder(head->left);
    Postorder(head->right);
    cout << head->data << " ";
}

string search(Node* head, int val) {
    if (head == NULL) {
        return "NOT FOUND";
    }
    if (head->data == val) {
        return "FOUND";
    }
    if (head->data > val) {
        return search(head->left, val);
    } else {
        return search(head->right, val);
    }
}

void findMinimum(Node* head) {
    Node* n = head;
    if (n == NULL) {
        cout << "No Tree found";
        return;
    }
    while (n->left != NULL) {
        n = n->left;
    }
    cout << "The Minimum value is: " << n->data << " ";
}

void findMaximum(Node* head) {
    Node* n = head;
    if (n == NULL) {
        cout << "No Tree found";
        return;
    }
    while (n->right != NULL) {
        n = n->right;
    }
    cout << "The Maximum value is: " << n->data << " ";
}

int CommonAncestor(Node* head, int a, int b) {
    if (head == NULL) {
        return -1; // Return a sentinel value indicating no common ancestor
    }
    if (head->data > a && head->data > b) {
        return CommonAncestor(head->left, a, b);
    } else if (head->data < a && head->data < b) {
        return CommonAncestor(head->right, a, b);
    } else {
        return head->data; // This is the common ancestor
    }
}

Node* findMin(Node* head) {
    while (head && head->left != NULL) {
        head = head->left;
    }
    return head;
}

Node* deletenode(Node* head, int val) {
    if (head == NULL) {
        return NULL;
    }

    if (val < head->data) {
        head->left = deletenode(head->left, val);
    } else if (val > head->data) {
        head->right = deletenode(head->right, val);
    } else {
        if (head->left == NULL) {
            Node* temp = head->right;
            delete head;
            return temp;
        } else if (head->right == NULL) {
            Node* temp = head->left;
            delete head;
            return temp;
        }

        Node* temp = findMin(head->right);
        head->data = temp->data;
        head->right = deletenode(head->right, temp->data);
    }
    return head;
}

int main() {
    int numberofnodes;
    cout << "Enter the number of nodes: ";
    cin >> numberofnodes;

    Node* head = NULL;

    while (numberofnodes--) {
        int data;
        cout << "Enter the data for the node: ";
        cin >> data;
        head = insert(head, data);
    }

    // Test functions
    // Inorder(head);
    // Preorder(head);
    // Postorder(head);
    deletenode(head, 15);

    Inorder(head);

    return 0;
}
