#include<iostream>
using namespace std;
int queue[4],n=4,x,front=-1,rear=-1;
void enQueue(){
    if (rear==n-1){
        cout<<"queue is full";
    }
    else{
        if (front==-1){
            front=0;
            
        }
        rear++;
        cout<<"enter the element ";
        cin>>x;
        queue[rear]=x;
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
        }
        else{

        front++;
        }
    }
}
void display(){
    if (front==-1){
        cout<<"queue is empty";
    }
    else{
        for (int i=front;i<=rear;i++){
            cout<<queue[i]<<endl;
        }
    }
}
int peek(){
    if (front==-1){
        return 0;
    }
    else{
        return queue[front];
    }
}
int main(){
enQueue();
enQueue();
enQueue();
enQueue();
DeQueue();

int y=peek();
if (y==0){
    cout<<"queue is empty";
}
else{
    cout<<"the peek element of queue is "<<y<<endl;
}
display();
}