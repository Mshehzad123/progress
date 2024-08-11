#include<iostream>
using namespace std;
int queue[4],n=4,front=-1,rear=-1,x;
void insert(){
    if (front==n-1){
        cout<<"queue is full";
    }
    else{
        if (front==-1){
            front=0;
        }
        else{
            cin>>x;
            queue[front]=x;
            if (front==rear){
                front=-1;
                rear=-1;
            }
            front++;
        }
    }
}
int main(){
    insert();
    insert();
}