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
void insertAtHead(node*&head,int data){
    node*newNode= new node();
    newNode->next=head;
    newNode->data=data;

    if (head!=NULL){
        head->prev=newNode;
        head=newNode;

    }
}
void isnertAtEnd(node*head,int data){
    node*newNode= new node();
    newNode->data=data;
    node*temp=head;
    if (head==NULL){
        insertAtHead(head,data);
        return;
    }
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
    int currpos=0;
    node*temp=head;
    if(pos==0){
        insertAtHead(head,data);
        return;
    }
    while (currpos!=pos-1&&temp!=NULL)
    {
        /* code */
        temp=temp->next;
        currpos++;

    }
    newNode->next=temp->next;
    if (temp->next!=NULL)
    temp->next->prev=newNode;
temp->next=newNode;
    newNode->prev=temp;
    
    
}
bool search(node*&head,int data){
    node*temp=head;
    while (temp!=NULL)
    {
    if (temp->data==data)
    {
        return true;
    }
    temp=temp->next;
    }
return false;
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
insertAtHead(n,1);
isnertAtEnd(n,4);
insertAtPos(n,44,2);
display(n);
cout<<(search(n,5)?" yeah ": " nop");
display(n);
}
