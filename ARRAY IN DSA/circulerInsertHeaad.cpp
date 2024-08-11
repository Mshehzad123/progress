#include<iostream>
using namespace std;
struct node
{
    /* data */
    int data;
    node*next;

};
node*head;
void isnertATHead(node*&head,int data){
    node*temp=head;
    node*n=new node();
    n->data=data;
    if (head==NULL){
        head=n;
        n->next=head;
        return;
    }
    while (temp->next!=head)
    {
        /* code */
        temp=temp->next;
        
    }
    temp->next=n;
    n->next=head;
        head=n;
    
}
void isnertATENd(node*&head,int data){
    node*temp=head;
    node*n= new node();
    n->data=data;
    if (head==NULL){
        isnertATHead(head,data);
        return;
    }
    while (temp->next!=head)
    {
        /* code */
        temp=temp->next;

    }
    temp->next=n;
    n->next=head;
    
}
void insertATPos(node*&head,int data,int pos){
    node*newNode= new node();
    newNode->data=data;
    node*temp=head;
      if (pos==0)
    {
        /* code */
        isnertATHead(head,data);
        return;
    }
    int currpos=0;
    while (currpos!=pos-1)
    {
        /* code */
        temp=temp->next;
        currpos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    

    
}
void display(node*head){
    if (head==NULL){
        cout<<"list is empty";
        return;
    }
    node*temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;

    }while (temp!=head);
    
}
int main(){
    node*m=NULL;
    isnertATHead(m,1);
    isnertATHead(m,2);
    isnertATHead(m,3);
    isnertATENd(m,5);
    display(m);
    insertATPos(m,2,50);
    display(m);
}
