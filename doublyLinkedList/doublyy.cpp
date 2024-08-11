#include<iostream>
using namespace std;
struct node{
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
    node*newNode=new node(data);
    if (head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    return;

 }
 void insertPos(int data,int pos){
    node*temp=head;
    int c=0;
    if (c<pos-1){
        temp=temp->next;
        c++;

    }
    node*n=new node(data);
    n->next=temp->next;
    temp->next=n;
    n->prev=temp;
    temp->next->prev=n;
    return;

 }
 void insertTail(int data){
    node*n=new node(data);
    if (tail==NULL){
        head=n;
        tail=n;
        return;
    }
    n->next=tail->next;
    tail->next=n;
    tail=n;
    return;

 }
 bool search(int data){
    node*n=head;
    while (n!=NULL)
    {
        /* code */
        if (n->data==data){
            return true;
        }
        n=n->next;
    }
    return false;
    
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
dl.insertHead(1);
dl.insertHead(2);
dl.insertHead(3);
dl.insertTail(7);
dl.insertPos(6,2);
dl.deleteStart();
cout<<(dl.search(3)?"yeah found " : "nop found ");
dl.display();
dl.display();


return 0;
}