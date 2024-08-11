#include<iostream>
using namespace std;

struct node {
    int data;
    node* next;

    node(int t) {
        data = t;
        next = NULL;
    }
};

class circuler {
public:
    node* head;
    node* tail;

    circuler() {
        head = NULL;
        tail = NULL;
    }

    void insertHead(int value) {
        node* newNode = new node(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head; // Update tail to maintain circular structure
        }
    }

    void insertTail(int value) {
        node* newNode = new node(value);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
            newNode->next = head;
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head; // Update tail to maintain circular structure
        }
    }

    void insertAtPos(int value, int pos) {
        if (pos <= 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            insertHead(value);
            return;
        }
        node* newNode = new node(value);
        node* temp = head;
        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }
        if (temp == NULL) {
            cout << "Position out of bounds" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }

    bool search(int value) {
        if (head == NULL) {
            return false;
        }
        node* temp = head;
        do {
            if (temp->data == value) {
                return true;
            }
            temp = temp->next;
        } while (temp != head);
        return false;
    }

    void display() {
        if (head == NULL) {
            cout << "Circular linked list is empty" << endl;
            return;
        }
        node* temp = head;
        do {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main() {
    circuler cl;
    cl.insertHead(5);
    cl.insertHead(3);
    cl.insertHead(1);

    cl.display();

    cl.insertAtPos(7, 2); // Insert 7 at position 2
    cl.display();

    int searchValue = 3;
    if (cl.search(searchValue)) {
        cout << searchValue << " found in the circular linked list" << endl;
    } else {
        cout << searchValue << " not found in the circular linked list" << endl;
    }

    return 0;
}
