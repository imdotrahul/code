#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        this->left = this->right = NULL;
    }
};

class createbinarytree{
    public:
        Node* pushvalue(Node*root,int data)
        {
            if(root == NULL)
            {
                return new Node(data);
            }
            else{
                if(data>root->data)
                {
                    root->right = pushvalue(root->right,data);
                }
                else{
                    root-> left = pushvalue(root->left,data);
                }
            }
            return root;
        }
};


void printlevelorder(Node* root) // print level order traversal in a binary tree
{
    if(root == NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int size = q.size();
        for(int i = 0;i<size;i++)
        {
            Node* front = q.front();
            q.pop();
            if(front->left!= NULL){
                q.push(front->left);
            }
            if(front->right!= NULL)
            {
                q.push(front->right);
            }

            cout<<front->data<<" ";
        }
    }
}


int main()
{
    createbinarytree a;
    int n;
    cout<<"Enter no. of nodes: ";
    cin>>n;
    Node* head = NULL;

    while(n--)
    {
        int data;
        cout<<"Enter the data for node: ";
        cin>>data;

        head = a.pushvalue(head,data);

    }
    printlevelorder(head);

}