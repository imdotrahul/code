#include<iostream>
using namespace std;

class stack{
    private:
        int size;
        int *arr;
        int top;
    public:

        stack(int size){
            this->size = size;
            arr= new int[size];
            top = -1;
        }
        void push(int num)
        {
            if(top<size-1)
            {
                top++;

                arr[top]= num;
            }
            else{
                cout<<"stack overflowed :( "<<"\n";
            }
        }
        void pop()
        {
            if(top!= -1)
            {
                top--;
            }
            else{
                cout<<"stack underflowed :( "<<"\n";
            }
        }
        bool isempty()
        {
            if(top!=(-1))
            {
                return false;
            }
            else{
                return false;
            }
        }
        int peek()
        {
            if(top>=0)
            {
                return arr[top];
            }
            else{
                cout<<"stack empty :("<<"\n";
                return -1;
            }
        }

};



int main()
{
    stack st(7);
    st.push(1);
    st.push(2);
    st.push(3);

   cout<<  st.peek()<<endl;
    cout<< st.isempty()<<endl;

    st.pop();

   cout<<  st.peek()<<endl;
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);

   cout<<  st.peek()<<endl;


}