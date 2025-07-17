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
    void deleteNode(ListNode* node) {
        // node->prev->next = node->next->next;
        node->val = node->next->val;
        node->next = node->next->next; //by this we update node with all values of node->next ultimately updating values of node & unlinking node->next from everywhere
    }
};