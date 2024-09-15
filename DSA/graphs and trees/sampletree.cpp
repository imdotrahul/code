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

Node*insert(Node*root,int val)// insert node into a tree
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

void printPreorder(Node*head){ //print Preorder Traversal
    if(head==NULL)
    {
        return ;
    }
    cout<<head->data<<" ";
    printPreorder(head->left);
    printPreorder(head->right);
}
void Inorder(Node*head)//Print Inorder traveral
{
    if(head==NULL)
    {
        return ;
    }

    Inorder(head->left);
    cout<<head->data<<" ";
    Inorder(head->right);

}
void postorder(Node*head) // Print postorder traversal
{
    if(head==NULL)
    {
        return ;
    }
    postorder(head->left);
    postorder(head->right);
    cout<<head->data<<" ";
}
string search(Node*head,int val) // search an item in a tree with a given value
{
    if(head==NULL){
        return "Not Found";

    }
    if(head->data==val)
    {
        return "found";
    }
    if(head->data<val){
         return search(head->right,val);
    }
    else{
       return  search(head->left,val);
    }

}
void findminimum(Node*head) //find minimum inside a binary tree
{
    Node*n;
    n= head;
    while(n->left!= NULL){
        n= n->left;
    }
    cout<<"The minimum number is: "<<n->data;

}
void findmaximum(Node* head){//find maximum inside a binary tree
    Node*n;
    n= head;
    while(n->right!= NULL){
        n= n->right;
    }
    cout<<"The maximum number is: "<<n->data;


}
Node*findmin(Node*root)//function for deletion of node wehere right and left subtree occurs
{
    while(root && root->left!= NULL)
    {
        root= root->left;
    }
    return root;
}

Node* deletenode(Node*head, int val)
{
    if(head == NULL)
    {
        return head; 
    }

    if(head->data>val)
    {
        head->left= deletenode(head->left,val);
    }
    if(head->data<val)
    {
        head->right= deletenode(head->right,val);
    }

    else{
        if(head->left==NULL&&head->right==NULL)
        {
            delete head;
            head = NULL;
        }
        if(head->left==NULL&&head->right!=NULL)
        {
            Node*temp = head->right;
            delete head;
            return temp;
        }
        if (head->left!= NULL && head->right == NULL) {
            Node* temp = head->left;
            delete head;
            return temp;
        }

        else{
            Node*temp = findmin(head->right);
            head->data = temp->data;
            head->right = deletenode(head->right,temp->data);

        }
    }

    return head;
}

int commonAncestor(Node*head,int a ,int b)
{
    if(head == NULL)
    {
        return 0;
    }
    
    else if(a<head->data&& b<head->data)
    {
        return commonAncestor(head->left,a,b);
    }
    else if (a>head->data&& b>head->data){
        return commonAncestor(head->right,a,b);
    }
    else{
        return head->data;
    }
    
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
    //printPreorder(head);
    //Inorder(head);
    //postorder(head);

    //cout<<search(head,8);
    //findmaximum(head);
    //findminimum(head);

    //deletenode(head,10);

    //Inorder(head);
    cout<<commonAncestor(head,5,35);



}