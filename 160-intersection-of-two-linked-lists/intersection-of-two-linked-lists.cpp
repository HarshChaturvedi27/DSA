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
        set<ListNode*> s;
        while(headA || headB){
            if (headA){
                if (s.find(headA) == s.end()){
                    s.insert(headA);
                } else{
                    return headA;
                }
                headA = headA->next;
            }
            if (headB){
                if (s.find(headB) == s.end()){
                    s.insert(headB);
                } else{
                    return headB;
                }
                headB = headB->next;
            }
        }
        return NULL;
    }
};