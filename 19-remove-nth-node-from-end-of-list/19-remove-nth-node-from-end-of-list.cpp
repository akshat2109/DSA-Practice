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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size = 0;
        ListNode* temp = head;
        while(temp)
        {
            size++;
            temp = temp->next;
        }
        size = size - n;
        ListNode* dummy = new ListNode();
        dummy->next = head;
        ListNode* prev = dummy;
        
        while(size--)
            prev = prev->next;
        prev->next = prev->next->next;

        return dummy->next;
    }
};