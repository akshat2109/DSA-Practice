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
    ListNode* helper(ListNode* head1, ListNode* head2) {
        
        if(!head1)
            return head2;
        
        if(!head2)
            return head1;
        
        if(head1->val <= head2->val) {
            head1->next = helper(head1->next, head2);
            return head1;
        }
        
        else {
            head2->next = helper(head1, head2->next);
            return head2;
        }
    }
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        ListNode *head1 = list1, *head2 = list2;
        
        return helper(head1, head2);
    }
};