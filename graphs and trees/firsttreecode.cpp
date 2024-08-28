#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
};
Node*root1;

Node* createnode(Node* root, int data)
{
    Node* n= new Node();
    n->data = data;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
    {
        root = n;

    }
    else{
        Node *ptr = root;
        if(ptr->data < data && ptr->left==NULL)
        {
            ptr->left=n;
            
        }
        else if(ptr->data<data && ptr->left!=NULL)
        {
            createnode(ptr->left,data);
        }
        else if(ptr->data>data && ptr->right==NULL)
        {
            ptr->right=n;
            
        }
        else if(ptr->data>data && ptr->right!=NULL)
        {
            createnode(ptr->right,data);
        }
    }
    
    // cout<< "Enter the data to be inserted:" << endl;
    // int data;
    // cin >> data;
    // root = new Node(data);
    // if(data == -1)
    //     return NULL;
    // cout << "Enter data to be inserted at left" << data << endl;
    // root -> left = createnode(root -> left);
    // cout << "Enter data to be inserted at right" << data << endl;
    // root -> right = createnode(root -> right);
    // return root;
    return root;

}

void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}

int main()
{
    Node*root = NULL;
    int numberofnodes;
    cout<<"Enter the number of nodes: ";
    cin>>numberofnodes;
    Node*head= NULL;
    while(numberofnodes--)
    {
        int data;
        cout<<"Enter data of the node: ";
        cin>>data;
        head = createnode(head,data);
    }
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(head);
 
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(head);
 
    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(head);
}