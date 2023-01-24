#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
};
Node* createnode(Node* root,int data)
{
    Node* n= new Node();
    n->data = data;
    n->left=NULL;
    n->right=NULL;
    if(root==NULL)
    {
        root=n;
    }
    else{
        Node*ptr= root;
        if(ptr->data > data && ptr->left==NULL)
        {
            ptr->left=n;
        }
        else if(ptr->data>data && ptr->left!=NULL)
        {
            createnode(ptr->left,data);
        }
        else if(ptr->data<data && ptr->right==NULL)
        {
            ptr->left=n;
        }
        else if(ptr->data>data && ptr->left!=NULL)
        {
            createnode(ptr->right,data);
        }

    }
    
    
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
    while(numberofnodes--)
    {
        int data;
        cout<<"Enter data of the node: ";
        cin>>data;
        root=createnode(root,data);
    }
    cout << "\nPreorder traversal of binary tree is \n";
    printPreorder(root);
 
    cout << "\nInorder traversal of binary tree is \n";
    printInorder(root);
 
    cout << "\nPostorder traversal of binary tree is \n";
    printPostorder(root);
}