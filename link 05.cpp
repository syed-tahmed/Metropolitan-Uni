//. Write a program in C/C++ to implement a Doubly Linked List.

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr, nullptr};
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next) temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}

void deleteFromPosition(Node*& head, int pos) {
    if (!head) return;
    Node* temp = head;
    if (pos == 1) {
        head = head->next;
        if (head) head->prev = nullptr;
        delete temp;
        return;
    }
    for (int i = 1; temp && i < pos; i++) temp = temp->next;
    if (!temp) return;
    temp->prev->next = temp->next;
    if (temp->next) temp->next->prev = temp->prev;
    delete temp;
}

void displayList(Node* head) {
    while (head) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;
    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    displayList(head);
    
    int pos;
    cout << "Enter position to delete: ";
    cin >> pos;
    deleteFromPosition(head, pos);
    displayList(head);
    
    return 0;
}

