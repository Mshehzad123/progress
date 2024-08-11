#include<iostream>
using namespace std;
int arr[4],n=4,top=-1;
void push(int x){
    if (top==n-1){
        cout<<"stack is full";
    }
    else{
        top++;
        arr[top]=x;
    }
}
void pop(){
    if (top==-1){
        cout<<"stack is empty ";
    }
    else{
        cout<<"pop element is "<<arr[top]<<endl;
        top--;
    }
}
void display(){
if (top>=0){
    cout<<"stack elements are";
    for (int i=top;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}
    else{
        cout<<"stack is empty";
    }

}
int main(){
    push(1);
    push(2);
    push(3);
    display();
pop();
pop();
}