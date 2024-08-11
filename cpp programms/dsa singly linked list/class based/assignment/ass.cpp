#include <iostream>
#include <string>
using namespace std;
struct node {
    float price;
    string product_name;
    node* next;
};
node* head = nullptr;
void push(float item_price, const string& item_name) {
    node* new_node = new node;
    new_node->price = item_price;
    new_node->product_name = item_name;
    new_node->next = head;
    head = new_node;
}
void print(node* current) {
    while (current != nullptr) {
        cout << "Product: " << current->product_name << ", Price: " << current->price <<endl;
        current = current->next;
    }
}
void deleteRecord(const string& item_name) {
    node* current = head;
    node* previous = nullptr;
    while (current != nullptr && current->product_name != item_name) {
        previous = current;
        current = current->next;
    }
    if (current != nullptr) {
        if (previous != nullptr) {
            previous->next = current->next;
        } else {
            head = current->next;
        }
        delete current;
        cout << "Record deleted successfully." <<endl;
    } else {
         cout << "Record not found." << endl;
    }
}

int main() {
    push(2.5, "Milk");
    push(1.0, "Bread");
    push(3.5, "Eggs");
    cout << "Initial Grocery List:" << endl;
    print(head);
    int numItems;
    cout << "Enter the number of new items: ";
    cin >> numItems;
    for (int i = 0; i < numItems; ++i) {
        string itemName;
        float itemPrice;
        cout << "Enter the name of item " << i + 1 << ": ";
        cin >> itemName;
        cout << "Enter the price of item " << i + 1 << ": ";
        cin >> itemPrice;
        push(itemPrice, itemName);
    }
           cout << "Updated Grocery List:" <<endl;
    print(head);
    string itemToDelete;
    cout << "Enter the name of the item to delete: ";
    cin >> itemToDelete;
    deleteRecord(itemToDelete);
         cout << "Final Grocery List:" << std::endl;
    print(head);
    return 0;
}
