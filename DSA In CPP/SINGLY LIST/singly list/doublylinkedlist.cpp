#include<iostream>
using namespace std;

// Node structure for a doubly linked list
struct node {
    int data;
    node* next;

    // Constructor to initialize data and next pointer
    // node(int d) {
    //     data = d;
    //     next = nullptr;
    // }
};

// Doubly linked list class
class doubly {
public:
    node* head;
    node* tail;

    // Constructor to initialize head and tail to nullptr
    doubly() {
        head = nullptr;
        tail = nullptr;
    }
};

int main() {
    // Create a new node with data 2
    node* newNode = new node(2);

    // Create an instance of the doubly linked list
    doubly dl;

    // Set the head and tail pointers of the doubly linked list
    dl.head = newNode;
    dl.tail = newNode;
    cout<<dl.head->data;

    return 0;
}
