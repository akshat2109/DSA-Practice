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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        
        ListNode *tA = headA, *tB = headB;
        
        unordered_map<ListNode*, bool> m;
        
        while(tA!=NULL || tB!=NULL)
        {
            if(tA!=NULL)
            {
                if(m[tA])
                    return tA;
                m[tA]= true;
                tA = tA->next;
                    
            }
            if(tB!=NULL)
            {
                if(m[tB])
                    return tB;
                m[tB]= true;
                tB = tB->next;
            }
        }
        return NULL;
    }
};