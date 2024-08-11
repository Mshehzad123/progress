#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int d){
        data=d;
    }
};
class circuler{
    public:
    node*head;
    node*tail;
    circuler(){
        head=NULL;
        tail=NULL;
    }
    void deleteStart(){
    if (head==NULL){
        return;
    }
    if (head->next==head){
    delete head;
    head=NULL;
    tail=NULL;
    }else{
        node*temp=head;
        head=head->next;
        tail->next=head;
        delete temp;
    }
}
void deleteAtPos(int pos){
    if (pos<=0){
        cout<<"list is empty ";
        return;
    }
    if (pos==1){
        node*temp=head;
        head=head->next;
        delete temp;
        tail->next=head;
        return;

    }
        node*temp=head;

    for (int i=1;i<pos-1&&temp->next!=head;i++){
        temp=temp->next;
    }
    if (head==NULL||temp->next==head){
        cout<<"position out of boundds ";
        return;

    }
    node*newNOde= temp->next;
    temp->next=temp->next->next;
    delete newNOde;


}
void deleteAtTail(){
     if (head==NULL){
        return;
    }
    if (head->next==NULL){
        delete tail;
        head=NULL;
        tail=NULL;
        return;
    }
    node*temp=head;
    while (temp->next!=tail)
    {
        /* code */
        temp=temp->next;
    }
    delete tail;
    tail=temp;
    tail->next=head;

     

    }
void insertHead(int data){
        node*newNode=new node(data);
        if (head==NULL){
            head=newNode;
            tail=newNode;
            newNode->next=head;
        }else{
            newNode->next=head;
            head=newNode;
            tail->next=newNode;
        }
    }
     
void display(){
if (head==NULL){
    cout<<"list is empty ";
    return;
}
    node*temp= head;
do {
    cout<<temp->data<<" ";
    temp=temp->next;
}
while (temp!=head);

}
};
int main(){
    circuler cl;
    cl.insertHead(1);
    cl.insertHead(2);
    cl.insertHead(3);
   
    // cl.display();
    // cl.deleteStart();
    cl.display();
    // cl.deleteAtTail();
    cl.deleteAtPos(1);
    cl.display();

    return 0;

}