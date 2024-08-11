#include<iostream>
using namespace std;
class node {
public:
    int data;
    node* next;
    node* prev; // New member for doubly linked list
    node(int value) {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

void insertatHead(node* &head, int val) {
    node* newNode = new node(val);
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}

void insertatTail(node* &head, int value) {
    node* newNode = new node(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

void insertAtposition(node* &head, int val, int pos) {
    if (pos == 0) {
        insertatHead(head, val);
        return;
    }
    node* new_Node = new node(val);
    node* temp = head;
    int current_pos = 0;
    while (current_pos != pos - 1 && temp != NULL) {
        temp = temp->next;
        current_pos++;
    }
    if (temp == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }
    new_Node->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = new_Node;
    temp->next = new_Node;
    new_Node->prev = temp;
}

void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << "<->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    node* n = new node(1);
    insertatHead(n, 3);
    insertatHead(n, 5);
    insertatTail(n, 120);
    insertAtposition(n, 12, 2);
    display(n);
    return 0;
}
