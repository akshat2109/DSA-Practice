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
    ListNode* helper(ListNode* l1, ListNode* l2) {
        if(!l1)
            return l2;
        
        if(!l2)
            return l1;
        
        if(l1->val <= l2->val) {
            l1->next = helper(l1->next, l2);
            return l1;
        }
        
        else {
            l2->next = helper(l1, l2->next);
            return l2;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if(lists.empty())
            return {};
        
        if(lists.size() == 1)
            return lists[0];
        
        ListNode* res = lists[0];
        for(int i=1; i<lists.size(); i++) {
            res = helper(res, lists[i]);
        }
        
        return res;
    }
};