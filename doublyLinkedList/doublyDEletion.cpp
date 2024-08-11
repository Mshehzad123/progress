#include<iostream>
using namespace std;
struct  node
{
    /* data */
    int data;
    node*next;
    node*prev;
    node(int d){
        data=d;
        next=NULL;
        prev=NULL;
    }
};
class  doubly
{
public:
    node*head;
    node*tail;
    doubly(){
        head=NULL;
        tail=NULL;
    }

void insertHead(int data){
    node*n=new node(data);
   if (head==NULL){
    head=n;
    tail=n;
    return;
   }
   n->next=head;
   head->prev=n;
   head=n;
   return;
}
void insertTail(int data){
    node*newNode= new node(data);
    if (tail==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
    return;

}
bool serach(int data){
    node*curr=head;
    while (curr!=NULL)
    {
        /* code */
        if (curr->data==data){
            return true;
        }
        curr=curr->next;
    }
        return false;
};
void insertPos(int data,int pos){
    node*temp=head;
    int c=0;
    while (c<pos-1)
    {
        /* code */
        temp=temp->next;
        c++;
    }
    node*newNode=new node(data);
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;
    temp->next->prev=newNode;
    return;

    
}
 void deleteStart(){
    if (head==NULL){
        return;
    }
    node*temp=head;
    head=head->next;
if (head==NULL){
tail=NULL;
}else{
    head->prev=NULL;
}
delete temp;
    
 }
void deleteEnd() {
    if (head == NULL) {
        return;
    }
    node* temp = tail;
    tail = tail->prev;
    if (tail == NULL) {
        // If there is no node after deletion, update head to NULL
        head = NULL;
    } else {
        // Otherwise, update the next pointer of the new tail to NULL
        tail->next = NULL;
    }
    delete temp;
}
void deleteAtPos(int pos) {
    node* temp = head;
    int c = 1;
    while (c < pos - 1) {
        temp = temp->next;
        c++;
    }
    if (temp == NULL || temp->next == NULL) {
        return; // Not enough nodes to delete or position out of bounds
    }
    node*n = temp->next;
    temp->next = n->next;
    if (n->next != NULL) {
        n->next->prev = temp;
    }
    delete n;
}


void display(){
    node*temp=head;
    while (temp!=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
};
int main(){
     doubly dl;
     dl.insertHead(2);
     dl.insertHead(2);
     dl.insertTail(9);
     dl.insertPos(5,1);
    //  cout<<(dl.serach(2)?"yeah " : "nop ");
     dl.display();

     cout<<endl;
    //  dl.deleteEnd();
    //  dl.display();
    //  cout<<endl;
     dl.deleteAtPos(1);
     dl.display();

     return 0;
}


