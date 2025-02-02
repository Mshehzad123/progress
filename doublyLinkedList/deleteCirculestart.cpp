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

    void deleteAtStart() {
        if (head == NULL) {
            cout << "Circular linked list is empty. Cannot delete from empty list." << endl;
            return;
        }
        if (head->next == head) { // Only one node in the list
            delete head;
            head = NULL;
            tail = NULL;
        } else {
            node* temp = head;
            head = head->next;
            tail->next = head; // Update tail to maintain circular structure
            delete temp;
        }
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

    cl.deleteAtStart();
    cl.display();

    return 0;
}
