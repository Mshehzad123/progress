#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
void insertHead(node*&head,int data){
    node* newNode = new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;

};
void insertTail(node*&head,int data){
    node* newNode = new node();
    newNode->data=data;
    newNode->next=NULL;
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    
};
void isertAtPos(node*&head,int data,int pos){
    if (pos==0){
        insertHead(head,data);
        return;

    }
    node*newNode= new node();
    int curr=0;
    node*temp=head;
    newNode->data=data;
    while (curr!=pos-1){
        temp=temp->next;
        curr++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
};
void display(node*head){
    node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
cout<<"NULL"<<endl;
};
int main(){
    node*n = new node();
    n->data=1;
    n->next=NULL;
    insertHead(n,5);
    insertTail(n,99);
    isertAtPos(n,44,1);
    display(n);
    return 0;
}
