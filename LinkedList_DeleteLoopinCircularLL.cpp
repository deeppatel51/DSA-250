#include<bits/stdc++.h> 
using namespace std;

class Node {
public:
    int data;
    Node* next;
    
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void deleteLoop(Node*& head) {
    Node* temp = head;
    unordered_map<Node*, bool> m;
    while(m[temp->next]!=true)
    {
        m[temp]=true;
        temp=temp->next;
    }
    temp->next = NULL;
}

void printLL(Node* head) {
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
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = head->next->next;
    
    deleteLoop(head);
    
    printLL(head);
    
    return 0;
}
