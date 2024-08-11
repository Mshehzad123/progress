#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
void insertAtpos(node*&head,int data,int pos){
    node*newNode= new node();
    node*temp=head;
    newNode->data=data;
    int curr=0;
    while (curr!=pos-1)
    {
    temp=temp->next;
    curr++;
    }
    newNode->next=temp->next;
    temp->next=newNode;   
}
void insertAtHead(node*&head,int data){
    node*newNode=new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;

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
    insertAtHead(n,4);
    insertAtHead(n,3);
    insertAtHead(n,32);
    insertAtpos(n,66,2);
    display(n);
}
