#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
};
node*head;
void insertATHEad(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    newNode->next=head;
    head=newNode;
}
void insertEnd(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    node*temp=head;
    while (temp->next!=NULL)
    {
        /* code */
        temp=temp->next;
    }
    temp->next=newNode;
    
    
}
void insertPos(node*&head,int data,int pos){
    node*newNode= new node();
    newNode->data=data;
    if (pos==0){
        insertATHEad(head,data);
        return;
    }
    int curpos=0;
    node*temp=head;
    while (curpos!=pos-1)
    {
        /* code */
        temp=temp->next;
        curpos++;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    
}
bool seearch(node*&head,int key){
    node*temp=head;
    while (temp!=NULL)
    {
    if (temp->data==key){
        return true;
        
    }
    temp=temp->next;
    }
    return false;
    

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
void deletePos(node*&head,int pos){
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
int main(){
    node*n=new node();
    n->data=2;
    n->next=NULL;
    insertATHEad(n,1);
    insertEnd(n,4);
    insertPos(n,50,1);
    display(n);
    cout<<(seearch(n,5)?"yeah " : " nop ");
    deleteHead(n);
    display(n);
    deleteEnd(n);
    display(n);
    deletePos(n,1);
    display(n);
}