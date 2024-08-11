#include<iostream>
using namespace std;
int queue[5],n=5,rear=-1,front=-1,x;
void EnQueue(){

    if (rear==n-1){
        cout<<"queue is full";
        return;

    }
    else{
        if (front==-1){
            front=0;
        }
        rear++;
        cout<<"enter the element ";
        cin>>x;
        queue [rear]=x;
    }
}
void DeQueue(){
    if (front==-1){
        cout<<"queue is empty";
    }
    else{
        cout<<"the deleted element is "<<queue[front]<<endl;
        if (front==rear){
            front=-1;
            rear=-1;
        }else{
            
        front++;
        }
    }
}
int main(){
    EnQueue();
    EnQueue();
    EnQueue();
    EnQueue();
    EnQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
    DeQueue();
     DeQueue();
}