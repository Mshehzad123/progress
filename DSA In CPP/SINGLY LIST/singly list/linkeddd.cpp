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
    newNode->next=NULL;
    newNode->next=head;
    head=newNode;
};
void insertAtTail(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    node*temp=head;
    while (temp->next!=NULL)
    {
         temp=temp->next;
    }
    temp->next=newNode;
    
};

void insertAtPos(node*& head, int data, int pos) {
    if (pos == 0) {
        insertAtHead(head, data);
        return;
    }
    node* newNode = new node();
    newNode->data = data;
    node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
};
void deletedatHead(node*&head){
    if (head==NULL){
        return;
    }
    node*temp=head;
    head=head->next;
    delete temp;


}

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
    n->data=2;
    insertAtHead(n,1);
 insertAtPos(n,1,3);
    insertAtTail(n,3);
    deletedatHead(n);
    display(n);
    return 0;
}