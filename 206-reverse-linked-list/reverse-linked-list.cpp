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

// CORRECT BUT NOT BEST WAY OF WRITING

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if (head == NULL) return head;
//         if (head->next == NULL) return head;
//         if (head->next->next == NULL){
//             ListNode* slow = head;
//             ListNode* fast = head->next;
//             slow->next = fast->next;
//             fast->next = slow;
//             return fast;
//         }
//         ListNode* slow = head;
//         ListNode* fast = slow->next;
//         ListNode* temp = fast->next;
//         head->next = NULL;
//         while (fast){
//             fast->next = slow;
//             slow = fast;
//             fast = temp;
//             if(temp != NULL) temp = temp->next;
//         }
//         return slow;
//     }
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* temp = curr->next; // Store the next node
            curr->next = prev;            // Reverse the current node's pointer
            prev = curr;                  // Move prev to current node
            curr = temp;                  // Move current to the next node
        }
        return prev; // New head of the reversed list
    }
};