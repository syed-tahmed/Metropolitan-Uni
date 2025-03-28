//Write a program in C/C++ to delete element from any position given by the user of a singly Linked List.

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



// Function to delete a node from a given position in the linked list
void deleteFromPosition(Node*& head, int position) {
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node at position " << position << " deleted successfully." << endl;
        return;
    }
    Node* temp = head;
    Node* prev = nullptr;
    int count = 1;
    while (temp != nullptr && count < position) {
        prev = temp;
        temp = temp->next;
        count++;
    }
    if (temp == nullptr) {
        cout << "Invalid position!" << endl;
        return;
    }
    prev->next = temp->next;
    delete temp;
    cout << "Node at position " << position << " deleted successfully." << endl;
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
    insertEnd(head, 40);
    insertEnd(head, 50);
    
    cout << "Linked List before deletion: " << endl;
    displayList(head);
    
    int position;
    cout << "Enter position to delete: ";
    cin >> position;
    

    deleteFromPosition(head, position);
    
    cout << "Linked List after deletion: " << endl;
    displayList(head);
    
    return 0;
}