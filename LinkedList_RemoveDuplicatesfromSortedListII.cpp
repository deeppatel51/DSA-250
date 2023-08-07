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
public:
    ListNode* deleteDuplicates(ListNode* head) {
        map <int, int> mp;

        while(head != NULL)
        {
            mp[head -> val]++;
            head = head -> next;
        }

        ListNode* newHead = new ListNode(); 
        ListNode* temp = newHead;
        for(auto & it: mp)
        {
            if(it.second == 1)
            {
                ListNode* ans = new ListNode(it.first);
                temp -> next = ans;
                temp = ans;
            }
        }
        return newHead -> next;
    }
};
