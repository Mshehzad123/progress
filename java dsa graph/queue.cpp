#include<iostream>
using namespace std;
int arr[4],n=4,front=-1,rear=-1,x;
void enqueue(){
    if (front==n-1){
        cout<<"queue full ";
    }
    else{
        if (front==-1){
            front=0;
        }
        rear++;
        cin>>x;
        arr[rear]=x;

    }
}
void dequeue(){
    if (front==-1){
        cout<<"empty "<<endl;
    }
    else{
        cout<<"the deleted element is "<<arr[front]<<endl;
        if (front==rear){
            front=-1;
            rear=-1;
        }
        else{

        front++;
        }
    }
}
void peek(){
    if (front==-1){
        return ;
    }
    else{
        cout<<"peek" <<arr[front];
    }
}

void display(){
    if (front==-1){
        cout<<"queue is empty ";
    }
    else{
        for (int i=front;i<=rear;i++){
            cout<<arr[i]<<endl;
        }
    }
}
int main(){
    enqueue();
    enqueue();
    enqueue();
    dequeue();
    dequeue();
    display();
    peek();
}