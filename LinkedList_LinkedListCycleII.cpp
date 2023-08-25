/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*, bool> m;
        ListNode *ptr=head;
        int count=0;
        while(ptr!=NULL)
        {
            if(m[ptr]==true) return ptr;
            m[ptr]=true;
            ptr=ptr->next;
        }
        return NULL;
    }
};


/////////////// Approach 2:

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL) return NULL;
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast!=NULL && slow != NULL)
        {
            slow = slow -> next;
            fast = fast -> next;
            if(fast != NULL)
            {
                fast = fast -> next;
            }

            if(slow==fast)
            {
                slow = head;
                while(slow==fast)
                {
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
            }
        }
        return NULL;
    }
};
