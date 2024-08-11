#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
void insertAtEnd(node*&head,int data){
    node*newNode=new node();
    newNode->data=data;
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    
}
int main(){
    node*n= new node();
    n->data=5;
    n->next=NULL;
    insertAtEnd(n,9);
    display(n);
}
