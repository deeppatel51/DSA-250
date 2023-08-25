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

void deleteDuplicates(Node*& head) {
    unordered_map<int, bool> m;
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL)
    {
        if(m[temp->next->data]==true)
        {  
            Node* a = temp->next;
            temp->next=temp->next->next;
            delete(a);
        }
        else
        {
            m[temp->next->data]=true;
            temp=temp->next;
        }   
    }
}

void printLL(Node* &head) {
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
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(4);
    head->next->next->next->next->next = NULL;
    
    deleteDuplicates(head);
    
    printLL(head);
    
    return 0;
}
