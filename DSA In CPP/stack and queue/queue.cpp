#include<iostream>
using namespace std;
#define n 100
class queue{
    public:
    int* arr;
    int top;
    int back;
    queue (){
        arr=new int[n];
        top=-1;
        back=-1;
    }
    void push(int x){

        if (back==n-1){
            cout<<"stack is overflow "<<endl;
            return;
        }
        back++;
        arr[back]=x;
    if (top==-1){
        top++;
    }
    }
    void pop(){
        if (top==-1||top>back){
            cout<<"no elements in queue "<<endl;
            return;
        }
        top++;
    }
int peek(){
     if (top==-1||top>back){
            cout<<"no elements in queue "<<endl;
            return -1;
        }
        return arr[top];

}
bool empty(){
     if (top==-1||top>back){
            return true;
        }
        return false;

}
};
int main(){
queue q;
q.push(1);
q.push(2);
q.push(3);
cout<<q.peek()<<"peek "<<endl;
q.pop();
cout<<q.peek()<<"peek "<<endl;
q.pop();
cout<<q.peek()<<"peek "<<endl;
q.pop();
cout<<q.peek()<<"peek "<<endl;
cout<<q.empty()<<endl;
return 0;
}
