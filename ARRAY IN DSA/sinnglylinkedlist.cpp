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
void insertAtEnd(node*&head,int data){
    node*newNode=new node();
    newNode->data=data;
    node*temp=head;
    while (temp->next!=NULL)
    {
        /* code */
        temp=temp->next;
    }
    temp->next=newNode;

    
}
void insertAtPos(node*&head,int data,int pos){
    node*newNode= new node();
    newNode->data=data;
    node*temp=head;
      if (pos==0)
    {
        /* code */
        insertATHead(head,data);
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
void deleteHead(node*&head){
    node*temp=head;
    head=head->next;
    delete temp;
    
}
void deleteEnd(node*&head){
    node*temp=head;
   while (temp->next->next!=NULL)
   {
    /* code */
    temp=temp->next;

   }
   delete temp->next;
   temp->next=NULL;
   
    
}
void deleteATPos(node*&head,int pos){
    node*temp=head;
    int currpos=0;
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
int main(){
    node*n=new node();
    n->data=2;
    n->next=NULL;
insertATHead(n,1);
insertAtEnd(n,4);
insertAtPos(n,3,2);
display(n);
// deleteHead(n);
// deleteEnd(n);
// deleteATPos(n,2);
// display(n);
cout<<(search(n,5)?" yeah ": " nop");
display(n);
}