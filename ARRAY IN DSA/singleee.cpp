#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
void insertAtHead(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
 }
 void insertAtEnd(node*&head,int data){
    node*newNode=new node();
    node*temp=head;
    if (head==NULL){
        newNode->next=head;
        head=newNode;
        return;
    }
    while (temp->next!=NULL)
    {
        /* code */
        temp=temp->next;
    }
    temp->next=newNode;

    
 }
 void insertAtPos(node*&head,int data,int pos){
    node*newNode= new node();
    node*temp=head;
    newNode->data=data;
    int currPos=0;
    while (currPos!=pos-1)
    {
        /* code */
        temp=temp->next;
currPos++;
    }

newNode->next=temp->next;
temp->next=newNode;
 }
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<" "<<endl;
        temp=temp->next;
    }
    

}
int main(){
    node*n=new node();
    n->data=2;
    n->next=NULL;
    insertAtHead(n,12);
    insertAtHead(n,12);
    insertAtHead(n,12);
    insertAtPos(n,30,1);
    display(n);
    insertAtEnd(n,20);
    display(n);
}