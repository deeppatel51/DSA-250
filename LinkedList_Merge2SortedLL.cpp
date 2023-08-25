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
    void solve(ListNode* list1, ListNode* list2)
    {
        ListNode* curr1 = list1;
        ListNode* next1 = list1->next;
        ListNode* curr2 = list2;
        ListNode* next2 = curr2->next;
        if(list1->next==NULL)
            {
                list1->next=list2;
            }
        while(next1!=NULL && curr2 != NULL)
        {
            if((curr2->val >= curr1 ->val) && (next1 -> val >= curr1 ->val))
            {
                curr1->next = curr2;
                next2 = curr2->next;
                curr2->next = next1;
                curr2 = next2;
                curr1 = curr2;
            }
            else
            {
                curr1 = next1;
                next1 = next1 -> next;
                if(next1==NULL)
                {
                    curr1->next=curr2;  
                }
            } 
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        if(list1 == NULL) return list2;
        if(list2 == NULL) return list1;
        if(list1->val >= list2->val) solve(list1, list2);
        else solve(list2, list1);
        return list1;
    }
};


////////////Approach 2

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
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
  {
        
		if(l1 == NULL)
			return l2;
				
		if(l2 == NULL)
			return l1;
		
		if(l1 -> val <= l2 -> val)
        {
			l1 -> next = mergeTwoLists(l1 -> next, l2);
			return l1;
		}
		else
        {
			l2 -> next = mergeTwoLists(l1, l2 -> next);
			return l2;            
		}
	}
};
