#include<iostream>
using namespace std;

class Stack{
    int *arr;
    int top;
    int size;
    public:
        Stack(int size){
            this->size=size;
            arr=new int[size];
            top=-1;
        }
        void push(int d){
            if(top<size-1){
                top++;
                arr[top]=d;
            }
            else{
                cout<<"Stack overflow"<<endl;
            }

        }
        int pop(){
            if(top<0){
                cout<<"Stack underflow"<<endl;
                return -1;
            }
            int elem=arr[top];
            top--;
            return elem;
        }
        int peek(){
            if(top>=0)
                return arr[top];
            else{
                cout<<"stack is empty"<<endl;
                return -1;
            }
        }

        void print(){
            if(top<0){
                cout<<"Stack is Empty"<<endl;
                return ;
            }
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }cout<<endl;
            return;

        }

};
int main(){
    Stack st(5);
    st.push(8);
    st.push(9);
    st.push(10);
    st.print();
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();


}