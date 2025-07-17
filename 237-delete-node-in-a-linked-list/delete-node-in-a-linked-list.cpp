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
        ListNode* temp = node->next;
        *node = *node->next;
        delete temp;
        //by this we update node with all values of node->next ultimately updating values of node & unlinking node->next from everywhere
        //*node = *node->next;
    }
};