#include<iostream>
using namespace std;
struct  node
{
    int data;
    node*next;
    node(int d){
        data=d;
        next=NULL;
    }
};

class doubly
{
public:
node*head;
node*tail;
doubly(){

    head=NULL;
    tail=NULL;
}

};

int main(){
    node*newNode= new node(2);
    doubly dl;
    dl.head=newNode;
    dl.tail=newNode;
    cout<<dl.head->data;
    return 0;


}

