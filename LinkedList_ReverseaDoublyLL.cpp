#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;
    
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

void reverseDoublyLinkedList(Node*& head) {
    Node* current = head;
    Node* temp = nullptr;
    
    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; // Move to the next node
    }
    
    if (temp != nullptr) {
        head = temp->prev; // Update the new head
    }
}

void printDoublyLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->prev = head;
    head->next->next = new Node(3);
    head->next->next->prev = head->next;
    
    cout << "Original Doubly Linked List: ";
    printDoublyLinkedList(head);
    
    reverseDoublyLinkedList(head);
    
    cout << "Reversed Doubly Linked List: ";
    printDoublyLinkedList(head);
    
    return 0;
}
