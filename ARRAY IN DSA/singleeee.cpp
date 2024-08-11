#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    
};
node*head;
void isnertAtHead(node*&head,int data){
    node*newNode=new node();
    newNode->next=head;
    head=newNode;
    return;
}
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    node*n=new node();
    n->data=2;
    n->next=NULL;
    isnertAtHead(n,3);
    isnertAtHead(n,4);
    display(n);
}