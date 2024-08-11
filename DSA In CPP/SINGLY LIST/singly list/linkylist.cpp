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
    newNode->next=head;
    head=newNode;
};
void insertAtTail(node*&head,int data){
    node*newNode= new node();
    newNode->data=data;
    if (head==NULL){
        return;
    }
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;

    }
    temp->next=newNode;
    

};
void insertAtPos(node*&head,int data,int pos){
    if (pos<=0){
        return;
    }
    node*newNode=new node();
    node*temp=head;
    newNode->data=data;
    
    for (int i=0;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    if (temp==NULL){
        cout<<"out of bund";
    return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    
};
void deletedhead(node*&head){
    node*temp=head;
    head=head->next;
    delete temp;

}
void deleteTail(node*&head){
    if (head==NULL||head->next==NULL)return;
   node*temp=head;
   while (temp->next->next!=NULL)
   {
    temp=temp->next;
   }
   delete temp->next;
   temp->next=NULL;    
};
bool search(node* head, int data) {
    node* curr = head;
    while (curr != NULL) {
        if (curr->data == data) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

void deleteAtpos(node*&head,int pos){
    if (pos==0){
        deletedhead(head);
        return;
    }
    node*prev=head;
    int cpos=0;
    if (cpos!=pos-1){
        prev=prev->next;
        cpos++;
    }
    node*temp=prev->next;
    prev->next=prev->next->next;
    delete temp;
    


}
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
    cout<<temp->data<<" ";
    temp=temp->next;
    }
    
};
int main(){
    node*n= new node();
    n->data=2;
    n->next=NULL;
    bool present=search(n,6);
    cout<<(present?"yeah " : "nop ");
    insertAtHead(n,1);
    insertAtPos(n,8,2);
    insertAtTail(n,9);

    //  deletedhead(n);
    //  deleteTail(n);
    //  deleteAtpos(n,2);
    
    
    display(n);
    return 0;

}