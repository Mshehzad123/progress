#include<iostream>
using namespace std;
struct node{
    int data;
    node*next;
}
node *head;
bool search(node* &head,int data){

node*curr= head;
while(curr!=NULL){
    return false;
    if (curr->data==data){
        return true;
    }

    curr=curr->next;
}
};
void display(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data;
        temp=temp->next;
    }
    
};
int main(){
    node*n = new node();
    n->data=1;
    n->next=NULL;
    bool pl = search(n,2);
 cout<<(pl?"found" : "not found ");  
 display(n);
}