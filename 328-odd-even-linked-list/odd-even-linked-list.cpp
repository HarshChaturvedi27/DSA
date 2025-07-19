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
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next || !head->next->next) return head;
        ListNode* odd = head;
        ListNode* even = head;
        ListNode* temp = head->next;
        while (odd){
            even = even->next;
            odd->next = odd->next->next;
            odd = odd->next;
            if (even->next->next){
                even->next = even->next->next;
            } else {
                odd->next = temp;
                even->next = NULL;
                return head;
            }
            even = odd;
            if (!odd->next || !odd->next->next) {
                odd->next = temp;
                return head;
            }
        }
        return head;
    }
};