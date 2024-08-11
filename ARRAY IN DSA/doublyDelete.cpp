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
void deleteAThad(node*&head){
     node*temp=head;
     head=head->next;
    head->prev=NULL;
    delete temp;
}
void deleteAtEnd(node*& head) {
   node*n= head;
   while (n->next!=NULL)
   {
    /* code */
    n=n->next;
   }
   n->prev->next=NULL;
   delete n;
   
}
void deleteAtPos(node*&head,int pos){
    node*n= head;
    int currpos=0;
    while (n!=NULL&&currpos!=pos-1)
    {
        /* code */
        n=n->next;
        currpos++;
    }
    n->next=n->next->next;
    n->next->next->prev=n;
    delete n->next;
    

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
    n->data=1;
    n->next=NULL;
insertAtHEad(n,2);
insertAtHEad(n,3);
insertAtHEad(n,4);
display(n);
// deleteAThad(n);
// deleteAtEnd(n);
deleteAtPos(n,1);
display(n);
}