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
    bool isPalindrome(ListNode* head) {
        ListNode *pll = new ListNode();
        pll->next = head;
        ListNode *fast = pll, *slow = pll;
        while(fast->next && fast->next->next)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode *cur = slow->next, *prev = NULL;;
        slow->next = NULL;
        
        while(cur)
        {
            ListNode* forw = cur->next;
            cur->next = prev;
            prev = cur;
            cur = forw;
        }
        
        ListNode* temp = head;
        while(temp)
        {
            if(temp->val != prev->val)
                return false;
            temp = temp->next;
            prev = prev->next;
        }
        return true;
    }
};