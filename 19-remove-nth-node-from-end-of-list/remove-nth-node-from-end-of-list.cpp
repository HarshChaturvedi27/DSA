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
        if (!head || !head->next) return NULL;
        int size = 0;
        ListNode* temp = head;
        while(temp){
            size++;
            temp = temp->next;
        }
        int cnt = 0;
        temp = head;
        ListNode* delNode = NULL;

        // Special case: remove the first node // check last submission for failed case
        if (size - n == 0) {
            delNode = head;
            head = head->next;
            delete delNode;
            return head;
        }

        while (temp){
            cnt++;
            if (cnt == (size - n)){
                delNode = temp->next;
                temp->next = temp->next->next;
                delete delNode;
                return head;
            }
            temp = temp->next;
        }
        return head;
    }
};