#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
}

void insertAtBottom(stack<int>& st, int num){
    if(st.empty()){
        st.push(num);
        return ;
    }
    int a=st.top();
    st.pop();
    insertAtBottom(st,num);
    st.push(a);

}


void reverseStack(stack<int>& st){
    if(st.empty()){
        return ;
    }
    int top=st.top();
    st.pop();
    reverseStack(st);

    insertAtBottom(st, top);

}
    void sort(stack<int>& st,int a){
        if(st.empty()){
            st.push(a);
            return ;
        }
        int b=st.top();
        if(a<b){
            st.pop();
            sort(st,a);
        }
        else{
            st.push(a);
            return ;
        }
        st.push(b);


    }

void SortStack(stack<int> &stack){
    if(stack.empty()){
       return ;     
    }
    int a=stack.top();
    stack.pop();
    SortStack(stack);
    sort(stack,a);
    
    }



int main(){
    
    stack<int> st;

    st.push(5);
    st.push(22);
    st.push(0);
    st.push(10);
    st.push(-2);
    st.push(8);
    int a=st.top();
    print(st);
    reverseStack(st);
    SortStack(st);
    print(st);
}