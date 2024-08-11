#include<iostream>
using namespace std;
    int stack[5],n=5,top=-1;
void push(int x){
    if (top==n-1){
        cout<<"stack ios full";

    }
    else{
        top++;
        stack [top]=x;
    }
}
void pop(){
    if (top==-1){
        cout<<"stack ios empty"<<endl;

    }
    else{
        cout<<"the poped elements is"<<stack[top];
        top--;
    }
}
void display(){
if (top>=0){
    cout<<"stack elements are";
    for (int i=top;i>=0;i--){
        cout<<stack[i]<<endl;
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
    push(4);
    display();
    pop();
}