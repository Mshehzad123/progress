#include<iostream>
using namespace std;
struct node
{
    /* data */
    int data;
    node*next;
    node*prev;
};
node*head;
void insertAtHEad(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insertAtEnd(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    node*temp=head;
    while (temp->next!=NULL)
    {
        /* code */
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->prev=temp;
    
}
void insertAtPos(node*&head,int data,int pos){
    node*newNode= new node();
    newNode->data=data;
    node*temp=head;
    int currpos=0;
    if (pos==0){
        insertAtHEad(head,data);
        return;
    }
    while (currpos!=pos-1&&temp!=NULL)
    {
        /* code */
        temp=temp->next;
        currpos++;
    }
    newNode->next=temp->next;
    if (temp!=NULL)
    newNode->next->prev=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    

}
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main(){
    node*n= new node();
    n->data=2;
    n->next=NULL;
insertAtHEad(n,1);
insertAtEnd(n,9);
insertAtPos(n,22,1);
display(n);
}
