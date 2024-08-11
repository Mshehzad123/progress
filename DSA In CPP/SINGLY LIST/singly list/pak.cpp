#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next =NULL;
    }

};
void insertATHead(node*&head,int value){
    node*newNode = new node(value);
    newNode->next=head;
    head=newNode;
}
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
}
int main(){
    node*n=new node(1);
    insertATHead(n,4);
    display(n);
    return 0;
}