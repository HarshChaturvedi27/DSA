/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// dosent work for non cycle lists with duplicates
// this approach compares value not the address of the nodes if address matches eaxct node is repeated but in value could be another node with same value hence we use Tortoise & Hare algo.

// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         set<int> s;
//         ListNode* temp = head;
//         while (temp != NULL){
//             if (s.find(temp->val) == s.end()){
//                 s.insert(temp->val);
//             } else return true;
//             temp = temp->next;
//         }
//         return false;
//     }
// };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) return true;
        }
        return false;
    }
};