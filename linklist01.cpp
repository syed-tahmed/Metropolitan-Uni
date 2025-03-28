// Write a program in C/C++ to delete an element from beginning of a singly Linked List.
#include <iostream>
using namespace std;

// Define the structure of a Node
struct Node {
    int data;
    Node* next;
};


void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr};
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete the first node of the linked list
void deleteFromBeginning(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    Node* temp = head; // Store reference to the first node
    head = head->next; // Move head to the next node
    delete temp;       // Free memory
    cout << "First node deleted successfully." << endl;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    
  
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    
    cout << "Linked List before deletion: " << endl;
    displayList(head);
    

    deleteFromBeginning(head);
    
    cout << "Linked List after deletion: " << endl;
    displayList(head);
    
    return 0;
}