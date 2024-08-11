#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node(int value) {
        data = value;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val) {
    node* newNode = new node(val);
    newNode->next = head;
    head = newNode;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* head = new node(1);
    insertAtHead(head, 2);
    insertAtHead(head, 3);

    display(head);

    return 0;
}
