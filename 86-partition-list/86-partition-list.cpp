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
    ListNode* partition(ListNode* head, int x) {
        ListNode* lhead = new ListNode(0);
        ListNode* ghead = new ListNode(0);
        ListNode* less = lhead;
        ListNode* greater = ghead;
        
        while(head)
        {
            if(head->val < x)
            {
                less->next = head;
                less = less->next;
            }
            else
            {
                greater-> next = head;
                greater = greater->next;
            }
            head = head->next;
        }
        greater->next = NULL;
        less->next = ghead->next;
        
        return lhead->next;
    }
};