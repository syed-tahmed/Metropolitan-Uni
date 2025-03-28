//Write a program in C++ to delete an element from end of a singly Linked List.

#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the linked list
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



// Function to delete the last node of the linked list
void deleteFromEnd(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        cout << "Last node deleted successfully." << endl;
        return;
    }
    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    cout << "Last node deleted successfully." << endl;
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
    

    deleteFromEnd(head);
    
    cout << "Linked List after deletion: " << endl;
    displayList(head);
    
    return 0;
}