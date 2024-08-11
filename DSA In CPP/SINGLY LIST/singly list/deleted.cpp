#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

node* head;

void insertAtHead(node*& head, int data) {
    node* newNode = new node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void (node* &head){
    if (head==NULL)return;
    node*temp=head;
    head=head->next;
    delete temp;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    node* n = new node();
    n->data = 1;
    n->next = nullptr;
    insertAtHead(n, 7);
    display(n);
    deletee(n);
    display(n);
    return 0;
}
