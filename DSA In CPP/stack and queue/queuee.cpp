#include<iostream>
using namespace std;
#define n 20
class queue{
    public:
    int*arr;
    int top;
    int back;
    queue(){
        arr=new int [n];
        top=-1;
        back=-1;
    }
    void push(int x){
        if (back==n-1){
            cout<<"list is overflow";
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
            cout<<"empty";
            return;
        }
        top++;
    }
    int  peek(){
        if (top==-1||top>back){
            cout<<"empty";
            return -1;
        }
        return arr[top]; 
    }
    bool empty(){
        if (top==-1||top>back){
            return false;
        }
        return true;
    }
};
int main(){
queue ql;
ql.push(1);
ql.push(2);
ql.push(3);
ql.peek();
cout<<ql.peek()<<endl;
ql.pop();
cout<<ql.peek();


}