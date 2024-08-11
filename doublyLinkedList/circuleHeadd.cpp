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
    void insertTail(int data){
        node*newNode=new node(data);
        if (head==NULL){
            head=newNode;
            tail=newNode;
            tail->next=head;
        }
        else{
            tail->next=newNode;
            newNode->next=head;
            
        }
    }
    void insertAtPos(int data,int pos){
        if (pos<=0){
            cout<<"invalid poaition ";
            return;
        }
        if (pos==1){
            insertHead(data);
            return;
        }
        node*temp=head;
        for (int i=1; i<pos-1&& temp !=NULL;i++ ){
            temp=temp->next;
        }
        node*newNode= new node(data);
        if (temp==NULL){
cout<<"position is out of bound";

        }
        newNode->next=temp->next;
        temp->next=newNode;
        tail->next=head;
    }
void display(){
    node*temp= head;
if (head==NULL){
    cout<<"list is empty ";
    return;
}
do {
    cout<<temp->data<<" ";
    temp=temp->next;
}
while (temp!=head);


}
bool search(int data){
    if (head==NULL){
        return false;
    }
    node*newNode= head;
   do {
     if (newNode->data=data){
        return true;

    }
    newNode=newNode->next;
   }while (newNode!=head);

   return false;
    
}
void deleteStart(){
    if (head==NULL){
        return;
    }
    if (head->next=head){
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
};
int main(){
    circuler cl;
    cl.insertHead(1);
    cl.insertHead(2);
    cl.insertHead(3);
    cl.insertAtPos(8,2);
    cl.insertTail(9);
    cl.display();
    cl.deleteStart();
    cout<<(cl.search(3)?"yeah " : "nop")<<endl;
    cl.display();

}