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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            //delete head; //LC dosent support this
            return nullptr;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;
        
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        if (prev) {
            prev->next = slow->next;
            delete slow;
        } else {
            // This case handles 2-node lists where we delete the first node
            ListNode* newHead = head->next;
            //delete head; // LC dosent support this
            return newHead;
        }
        
        return head;
    }
};

// using dummy
// class Solution {
// public:
//     ListNode* deleteMiddle(ListNode* head) {
//         if (!head || !head->next) {
//             return nullptr;
//         }
        
//         ListNode dummy(0);
//         dummy.next = head;
//         ListNode* slow = &dummy;
//         ListNode* fast = &dummy;
        
//         while (fast->next && fast->next->next) {
//             slow = slow->next;
//             fast = fast->next->next;
//         }
        
//         ListNode* toDelete = slow->next;
//         slow->next = slow->next->next;
//         delete toDelete;
        
//         return dummy.next;
//     }
// };