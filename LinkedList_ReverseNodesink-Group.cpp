/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    int length(ListNode* head){
        int size = 0;
        ListNode* ptr = head;
        while(ptr){
            ptr = ptr->next;
            size++;
        }
        return size;
    }
public:
    ListNode* solve(ListNode* head,int &k,int size){
        if(size < k){
            return head;
        }
        if(head == NULL){
            return NULL;
        }

        ListNode *curr = head,*forward = NULL,*prev = NULL;
        int ct = 0;
        while(curr != NULL && ct < k){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            ct++;
        }

        head->next = solve(forward,k,size - k);
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = length(head);
        return solve(head,k,n);
    }
};
