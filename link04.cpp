// Write a program in C/C++ to implement a Circular Linked List.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, head};
    if (!head) {
        head = newNode;
        head->next = head;
        return;
    }
    Node* temp = head;
    while (temp->next != head) temp = temp->next;
    temp->next = newNode;
}

void deleteFromPosition(Node*& head, int pos) {
    if (!head) return;
    Node *temp = head, *prev = nullptr;
    if (pos == 1) {
        while (temp->next != head) temp = temp->next;
        if (head == head->next) head = nullptr;
        else {
            temp->next = head->next;
            delete head;
            head = temp->next;
        }
        return;
    }
    for (int i = 1; i < pos - 1 && temp->next != head; i++) temp = temp->next;
    if (temp->next == head) return;
    prev = temp->next;
    temp->next = prev->next;
    delete prev;
}

void displayList(Node* head) {
    if (!head) return;
    Node* temp = head;
    do {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != head);
    cout << "(Back to head)" << endl;
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