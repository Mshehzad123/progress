#include<iostream>
using namespace std;
int stack[4],n=4,top=-1;
void insert(int x){
    if (top==n-1){
        cout<<"stack is full";
    }
    else{
        top++;
        stack[top]=x;
    }

}
void delted(){
    if (top==-1){
        cout<<"stack is empty";
    }else{
        cout<<"the deleted element is "<<stack[top]<<endl;
        top--;
    }
}
void display(){
    if (top>=0){
        for (int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
    }
    else{
        cout<<"stack is empty";
    }
}
int main(){
    insert(1);
    insert(2);
    insert(3);
    display();
    delted();
    delted();

}