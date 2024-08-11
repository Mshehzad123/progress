#include<iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

void insertAtHead(node*& head, int data) {
    node* newNode = new node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtTail(node*& head, int data) {
    node* newNode = new node();
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void insertAtPos(node*& head, int data, int pos) {
    if (pos == 0) {
        insertAtHead(head, data);
        return;
    }
    node* newNode = new node();
    newNode->data = data;
    node* temp = head;
    for (int i = 0; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Position out of bounds." << endl;
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
};


void display(node* head) {
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main() {
    node* n = NULL;
    insertAtTail(n, 1);
    insertAtTail(n, 5);
    insertAtPos(n, 6, 2);
    insertAtHead(n, 22);
    display(n);
    getchar();
    return 0;
}
