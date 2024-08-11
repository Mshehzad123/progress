#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
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
    insertAtHead(n,7);
    display(n);
}
