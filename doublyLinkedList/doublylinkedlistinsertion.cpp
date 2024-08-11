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
class doubly{
    public:
    node*head;
    node*tail;
    doubly(){
        head=NULL;
        tail=NULL;
    }
    void display(){
        node*temp=head;
        while (temp!=NULL)
        {
                cout<<temp->data<<" ";
                temp=temp->next;            /* code */
        }
        
    }
    void insertHead(int data){
        node*newNode= new node(data);
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
      bool search(int data) {
        node* curr = head;
        while (curr != NULL) {
            if (curr->data == data) {
                return true; // Element found
            }
            curr = curr->next;
        }
        return false; // Element not found
    }
    void insertAtPos(int data,int pos){
        node*temp=head;
        int c=0;
        while (c<pos-1)
        {
            temp=temp->next;
            c++;
        }
        node*n=new node(data);
        n->next=temp->next;
        temp->next=n;
        n->prev=temp;
        n->next->prev=n;
        return;

        
    }
};
int main(){
    doubly dl;
    dl.insertHead(1);
    dl.insertHead(1);
    dl.insertHead(1);
    dl.insertTail(5);
    dl.insertAtPos(9,2);
    cout << "Searching for 3: " << (dl.search(3) ? "Found" : "Not Found") << endl;
    cout << "Searching for 6: " << (dl.search(6) ? "Found" : "Not Found") << endl;
    dl.display();
    return 0;
}