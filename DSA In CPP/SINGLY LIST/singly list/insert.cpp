#include<iostream>
using namespace std;
class node{
    public:
    int data;
    float data2;
    node*next;
    node(int value,float pak){
        data=value;
        data2 = pak;
        next = NULL;
    }
};
void insertHead(node* &head, int value,float pak){
    node* newNode = new node(value,pak);
    newNode->next=head;
    head=newNode;
};
void deletee(node*&head){
    node* temp=head;
    head=head->next;
    free(temp);
}

void display(node*head){
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->"<<temp->data2;
        temp=temp->next;
    }
};
int main(){
       node*n= new node(1,3.4);
       insertHead(n,3,3.9);
       insertHead(n,8,5.9);
       display(n);
       deletee(head);
       display(n);

       return 0;
}