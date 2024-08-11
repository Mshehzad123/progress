#include<iostream>
using namespace std;
class node {
    public:
    int data;
    node*next;
    node(int value){
        data=value;
        next = NULL;
    }
};
void insertatHead(node* &head, int val){
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
}
void insertatTail(node* &head,int value){
    node* Node = new node(value);
    node*temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = Node;
}
void insertAtposition(node* &head,int val,int pos){
    if (pos==0){
        insertatHead(head,val);
        return;
    }
    node* new_Node = new node(val);
    node*temp = head;
    int current_pos = 0;
    while (current_pos!=pos-1)
    {
        temp=temp->next;
        current_pos++;
    }
    new_Node->next = temp->next;
    temp->next = new_Node;

}
void display(node*head){
    node*temp = head;
    while (temp!= NULL )
    {
    cout<<temp->data<<"->";
    temp = temp->next;
    }
}
int main(){
    node* n = new node(1);
    insertatHead(n,3);
    insertatHead(n,5);
    insertatTail(n,120);
    insertAtposition(n,12,2);
    display(n);

return 0;
}