#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
    node(int d){
        data=d;
    next=NULL;
    }
};
class circuler{
    public :
    node*head;
    node*tail;
    circuler(){
        head=NULL;
        tail=NULL;
    }
    void insertHead(int data){
        node* newNode=new node(data);
if (head==NULL){
head= newNode;
tail=newNode;
newNode->next=head;
}else{
    newNode->next=head;
    head=newNode;
    tail->next=head;

}


    }
    void insertTail(int data){
    node*newNode= new node(data);
    if (head==NULL){
        head=newNode;
        tail=newNode;
        newNode->next=head;
    }else{
        tail->next=newNode;
        tail=newNode;
        newNode->next=head;
    }

}
void insertPos(int data,int pos){
    if (pos<=0){
        cout<<"position not availble ";
        return;
    }
    if (pos==1){
        insertHead(data);
        return;
    }
    node*newNode= new node(data);
    node*temp=head;
    for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp==NULL){
            cout<<"position is out of bounds ";
            return;
        }
        newNode->next=temp->next;
        temp->next=newNode;
}
bool search(int data){
    if (head==NULL){
        return false;
    }
    node*temp=head;
    do{
        if (temp->data==data){
            return true;
        }
        temp=temp->next;
    }while (temp!=head);
    return false;
    
}
    void display(){
        if (head==NULL){
            cout<<"list is empty ";
            return;
        }
        node*temp=head;
        do{
            cout<<temp->data<<" ";
        temp=temp->next;

        }while (temp!=head);

        
        
    }
};
int main(){
    circuler cl;
    cl.insertHead(1);
    cl.insertHead(2);
    cl.insertHead(3);
    cl.insertTail(8);
    cl.insertPos(9,2);

 cout<<(cl.search(5)? "yeah": "nop")<<endl;
    cl.display();
    return 0;
}