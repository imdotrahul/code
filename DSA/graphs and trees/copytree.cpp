#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
Node*buildtree(Node* root)
{
    cout<<"Enter the data:" << "\n";
    int data;
    cin>> data;
    root = new Node(data);

    if(data == -1)
    {
        return NULL;

    }

    cout<<"Enter left data"<<data<<"\n";
    root->left = buildtree(root->left);
    cout<<"Enter right data"<<data<<"\n";
    root->right = buildtree(root->right);   

    return root;

}

void Preorder(Node*root)
{
    cout<<root->data<<"\n";
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(Node*root)
{
    
    Inorder(root->left);
    cout<<root->data<<"\n";
    Inorder(root->right);
}
void Postorder(Node*root)
{
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data<<"\n";
}

int main()
{
    Node*root = NULL;
    root = buildtree(root);
    cout<<buildtree(root);
    cout << "Preeorder traversal is " ;
    Preorder(root);
    cout << "Inordere traversal is " ;
    Inorder(root);
    cout << "Postorder is ";
    Postorder(root);

    

}