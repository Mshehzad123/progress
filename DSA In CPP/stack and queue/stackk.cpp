#include<iostream>
using namespace std;
#define n 100
class  satck{
public:
   int*arr;
   int top;
   satck(){
    arr=new int[n];
    top=-1;

   }
   void push(int x){
    if (top==n-1){
        cout<<"list is empty";
        return;
    }
    top++;
    arr[top]=x;
   }
   void pop(){
    if (top==-1){
        cout<<"list is empty ";
        return;

    }
    top--;
   }
   int peek(){
    if(top==-1){
        cout<<"empty ";
        return -1;
    }
return arr[top];
   }
   bool empty(){
    return top=-1;
   }
};
int main(){
    satck sl;
    sl.push(1);
    sl.push(2);
    sl.push(5);
    cout<<sl.peek()<<endl;

    sl.pop();
    cout<<sl.peek();
    cout<<sl.empty();

}
 

