#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
    ~Node(){
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
void insertAtTail(int d,Node* tail){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}
void printLL(Node* head){
    Node* temp=head;
    if(temp==NULL){
        cout<<"Linked List is Empty"<<endl;
    }
    while(temp!=NULL){
        cout<<temp->data;
        temp=temp->next;
    }cout<<endl;
}
class Stack{
    Node* list=NULL;
    Node* head=list;
    Node* tail=list;
    int size;
    Stack(int size){
        this->size=size;
    }
    void push(int d){
        insertAtTail(d,tail);
    }
    void pop(){
        Node* temp=head;
        if(temp==NULL){
            cout<<"Stack UnderFlow"<<endl;
            return;
        }

        if(temp->next=NULL){
            delete temp;
            return;
        }
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        delete tail;
        tail=temp;
    }
};

int main(){



}