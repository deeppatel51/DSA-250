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
