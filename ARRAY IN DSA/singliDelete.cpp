#include<iostream>
using namespace std;
struct  node
{
    /* data */
    int data;
    node*next;
};
node*head;
void insertATHead(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;

}
void deletedEnd(node*&head){
    if(head==NULL||head->next==NULL){
        return;
    }
    node*temp=head;
    while (temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    

}
void deleted(node*&head){
    node*temp=head;
    head=head->next;
    delete temp;

}
void deleteAtPos(node*&head,int pos){
    node*temp=head;
    int currpos=0;
  if (pos==0){
    deleted(head);
    return;
  }
  while (currpos!=pos-1)
  {
    /* code */
    temp=temp->next;
    currpos++;
  }
  node*temp2=temp->next;
  temp->next=temp->next->next;
  delete temp2;
  
    
    
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
    n->data=5;
    n->next=NULL;
    insertATHead(n,7);
    
    display(n);
    // deleted(n);
    // deletedEnd(n);
    deleteAtPos(n,1);
    display(n);
}
