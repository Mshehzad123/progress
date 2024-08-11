#include<iostream>
using namespace std;
struct node
{
    /* data */
    int data;
    node*next;
};
node*head;
void isnertHead(node*&head,int data){
    node*n=new node();
    n->next=head;
    head=n;

}
void display(node*head){
    node*temp=head;
    while (temp->next!=NULL)
    {
        /* code */
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){
    node*n= new node();
    n->data=2;
    n->next=NULL;
    isnertHead(n,1);
    display(n);
}
