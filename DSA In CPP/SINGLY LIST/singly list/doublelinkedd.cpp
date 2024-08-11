#include<iostream>
using namespace std;

class node {
public:
    int data;
    node* next;
    node* prev;
    node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(node* &head, int val) {
    node* n = new node(val);
    if (head == NULL) {
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

int main() {
    node* head = NULL; // Initialize head pointer to NULL
    node* n = new node(1);
    head = n; // Assign the created node as head
    insertAtTail(head, 10);

    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}


