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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *temp = new ListNode(0);
		temp->next = head;
        ListNode* prev = temp;
        
        while(left > 1)
        {
            prev = prev->next;
            left--;
            right--;
        }
        ListNode* cur = prev->next;
        while(right > 1)
        {
            ListNode* forw = cur->next;
            cur->next = forw->next;
            forw->next = prev->next;
            prev->next = forw;
            right--;
        }
        return temp->next;
    }
};