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
        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *cur = dummy->next, *prev = dummy;
        
        while(cur && cur->next)
        {
            if(cur->val == cur->next->val)
            {
                while(cur->next && cur->val == cur->next->val)
                    cur = cur->next;
                
                prev->next = cur->next;
            }
            else
            {
                prev = prev->next;
            }
            cur = cur->next;
        }
        return dummy->next;
    }
};