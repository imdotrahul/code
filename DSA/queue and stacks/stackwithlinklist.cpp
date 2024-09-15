#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node*prev;

    Node(int val)
    {
        this->data= val;
        this->next = nullptr;
    }

};

class stack{
    private:
        Node*top;
        int size;
        int counter;

    public:
        stack(int size){
            this->size = size;

            top= nullptr;
            counter = 0;

        }
        void push(int val)
        {
            Node*n = new Node(val);
            if(counter<size)
            {
                n->next= top;
                top = n;
                counter++;
            } 
            else{
                cout<<"stack overflowed: "<<endl;

            }
        }
        void  pop()
        {
            if(counter >0)
            {
                top = top->next;
                counter--;

            }
            else{

                cout<<"stack underflow: "<<endl;
            }

        }
        bool isempty(){
            if(counter==0)
            {
                return true;
            }
            else {
                return false;
            }
        }

        int peek(){
            if(counter >0 )
            {
                return top->data;
            }
            else{
                cout<<"no element present: "<<endl;
                return -1;
            }
        }
};
int main()
{
    stack st(4);
    st.push(6);
    st.push(3);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.isempty()<<endl;
    st.pop();
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.peek()<<endl;

}