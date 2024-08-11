#include<iostream>
using namespace std;
struct  node
{
int data;
node*next;
};
node*head;
void insertAtHaed(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
};
void insertAtEnd(node*&head,int data){
    node*newNode= new node();
    node*temp=head;
    newNode->data=data;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
}
void insertAtPos(node*&head,int data,int pos){
    node*newNode= new node();
    newNode->data=data;
    while (pos==0)
    {
        insertAtHaed(head,data);
        return;
    }
    node*temp=head;
    int currpos=0;
    while (currpos!=pos-1)
    {
        temp=temp->next;
        currpos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    
    
}
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
   cout<<temp->data<<" ";
   temp=temp->next;
    }
    
}
int main(){
    node*n= new node();
    n->data=5;
    n->next=NULL;
    insertAtHaed(n,9);
    insertAtEnd(n,88);
    insertAtPos(n,555,1);
    display(n);
}