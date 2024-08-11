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

    void deleteAtPos(int pos) {
        if (head == NULL) {
            cout << "Circular linked list is empty. Cannot delete from empty list." << endl;
            return;
        }
        if (pos <= 0) {
            cout << "Invalid position" << endl;
            return;
        }
        if (pos == 1) {
            node* temp = head;
            head = head->next;
            delete temp;
            tail->next = head; // Update tail to maintain circular structure
            return;
        }

        node* temp = head;
        for (int i = 1; i < pos - 1 && temp->next != head; i++) {
            temp = temp->next;
        }
        if (temp == NULL || temp->next == head) {
            cout << "Position out of bounds" << endl;
            return;
        }
        node* toDelete = temp->next;
        temp->next = temp->next->next;
        delete toDelete;
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

    cout << "Original list: ";
    cl.display();

    cl.deleteAtPos(2); // Delete node at position 2
    cout << "List after deleting node at position 2: ";
    cl.display();

    return 0;
}
