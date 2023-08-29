#include<bits/stdc++.h> 
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* random;
    
    Node(int val) {
        data = val;
        next = nullptr;
        random = nullptr;
    }
};
void printLL(Node* &head)
{
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
};

void insertAtTail(Node* &cloneHead, Node* &cloneTail, int data)
{
    Node* a = new Node(data);
    if(cloneHead==nullptr)
    {
        cloneHead=a;
        cloneTail=a;
    }
    else
    {
        cloneTail->next=a;
        cloneTail=a;
    }
};

Node* copyList(Node* &head, Node* &cloneHead)
{
    Node* cloneTail = nullptr;
    Node* temp = head;
    while(temp!=NULL)
    {
        insertAtTail(cloneHead, cloneTail, temp->data);
        temp=temp->next;
    }

    Node* originalNode = head;
    Node* cloneNode = cloneHead;
    while(originalNode!=nullptr && cloneNode!=nullptr)
    {
        Node* a = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = a;

        a = cloneNode ->next;
        cloneNode -> next = originalNode;
        cloneNode = a;
    }

    Node* temp1 = head;
    while(temp1!=nullptr)
    {
        if(temp1->next!=nullptr)
        {
            if(temp1->random != nullptr)
            {
                temp1->next->random = temp1->random->next;
            }
            else
            {
                temp1->next=temp1->random;
            }
        }
        temp1=temp1->next->next;
    }
    originalNode = head;
    cloneNode = cloneHead;
    while(originalNode!=nullptr && cloneNode!=nullptr)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;

        if(originalNode->next!=nullptr)
        {
            cloneNode -> next = originalNode -> next;
        }
        cloneNode = cloneNode->next;
    }
    return cloneHead;
};

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->random = head->next;

    head->next->next = new Node(3);
    head->next->random = head->next->next->next;

    head->next->next->next = new Node(4);
    head->next->next->random = head->next->next->next;

    head->next->next->next->next = NULL;
    head->next->next->next->random = head->next->next->next;

    Node* cloneHead = nullptr;
    printLL(head);
    cout << endl;
    cloneHead = copyList(head, cloneHead);
    cout << endl;
    printLL(cloneHead);
    return -1;
}
