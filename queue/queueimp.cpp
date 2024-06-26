#include<iostream>
using namespace std;


class Queue{
    int *arr;
    int front, rear;
    int size=100;
    public:
    Queue(){
        arr=new int[this->size];
        front=-1,rear=0;
    }
    bool enqueue(int x){
        if(rear==size){
            cout<<"Stack Overflow"<<endl;
        }
        if(front==-1)front++;
        arr[rear]=x;
        rear++;
    }
    int dequeue(){
        if(front==rear){
            cout<<"Queue empty"<<endl;
            return -1;
        }
        int x=arr[front];
        front++;
        return x;
    }
    bool isEmpty(){
        if(front==rear)return true;
        return false;
    }
    int getfront(){
        if(front==rear)return -1;
        return arr[front];
    }
    void printQueue(){
        int x=front;
        for(int i=front;i<rear;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main(){
    Queue *q=new Queue();
    q->enqueue(5);
    q->enqueue(6);
    q->enqueue(7);
    q->enqueue(8);
    q->enqueue(9);
    q->printQueue();
    cout<<q->dequeue()<<endl;
    cout<<q->getfront()<<endl;
    q->dequeue();
    q->printQueue();
}