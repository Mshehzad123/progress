#include<iostream>
using namespace std;
struct  node
{
    /* data */
    int data;
    node*next;
};
node*head;
bool seearch(node*&head,int val){
    node*temp=head;
    while (temp!=NULL)
    {
        if (temp->data==val){
            return true;

        }
        temp=temp->next;
    }
    return false;
    
    

}
void insertAtHaed(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
};
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
   cout<<temp->data<<" ";
   temp=temp->next;
    }
    
}
int main(){
    node*n= new node();
    n->data=5;
    n->next=NULL;
    insertAtHaed(n,9);
    insertAtHaed(n,9);
    insertAtHaed(n,9);
    display(n);
   cout<<(seearch(n,5)?"yeah": "nop");
    display(n);
}