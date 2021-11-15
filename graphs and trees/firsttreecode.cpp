#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* right;
    Node* left;
};
Node* createnode(int data, Node* root)
{
    Node* n= new Node();
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    if(root=NULL)
    {
        root=n;
    }
    else{
        Node *ptr = root;
        if(root->data<data)
        {
            while(ptr)
        }
    }
    return n;
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
        root=createnode(data,root);
    }
    cout<<root->data<<root->left<<root->right;
}