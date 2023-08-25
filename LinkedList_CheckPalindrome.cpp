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
Node* reverse(Node*& temp)
{
    Node* curr = temp;
    Node* prev = NULL;
    Node* forward = nullptr;
    while(curr!=nullptr)
    {
        forward = curr-> next;
        curr->next = prev;
        prev=curr;
        curr = forward;
    }
    return prev;
}
bool checkPalindrome(Node*& head) 
{
    Node* fast = head->next;
    Node* slow = head;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    Node* mid = slow;
    Node* temp = mid->next;
    mid->next = reverse(temp);
    Node* p = mid->next;
    temp = head;
    while(mid->next!=NULL)
    {
        if(mid->next->data!=temp->data) return false;
        mid = mid ->next;
        temp = temp->next;
    }
    return true;
};

void printLL(Node* &head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(3);
    head->next->next = new Node(3);
    head->next->next->next = new Node(1);
    head->next->next->next->next = NULL;
    printLL(head);
    cout << checkPalindrome(head) << endl;

    printLL(head);
    
    return 0;
}
