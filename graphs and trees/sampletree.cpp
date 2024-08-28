#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right; 

    Node(int val){
        this->data= val;
        this->left = NULL;
        this->right= NULL;
    }   
};

Node*insert(Node*root,int val)
{

    if(root  == NULL)
    {
        return new Node(val);
    }
    else{
        Node*ptr = root;

        if(ptr->data>val)
        {
            ptr->left = insert(ptr->left,val);
        }
        else{
            ptr->right = insert(ptr->right,val);
        }

    }

    return root;

}

void printPreorder(Node*head){
    if(head==NULL)
    {
        return ;
    }
    cout<<head->data;
    printPreorder(head->left);
    printPreorder(head->right);
}
void Inorder(Node*head)
{
    if(head==NULL)
    {
        return ;
    }

    Inorder(head->left);
    cout<<head->data;
    Inorder(head->right);

}
void postorder(Node*head)
{
    if(head==NULL)
    {
        return ;
    }
    postorder(head->left);
    postorder(head->right);
    cout<<head->data;
}

int main()
{
    int numberofnodes;
    cout<<"Enter number of nodes: ";
    cin>>numberofnodes;


    Node*head = NULL;
    while(numberofnodes--)
    {
        int data;
        cout<<"Enter data for node: ";
        cin>>data;
        head = insert(head,data);

    }
    printPreorder(head);
    Inorder(head);
    postorder(head);

}