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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0); // Dummy node to simplify appending
        ListNode* tail = dummy; // Tracks the end of the new list
        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            tail->next = new ListNode(sum % 10);
            tail = tail->next;
        }

        ListNode* result = dummy->next;
        delete dummy; // Free dummy node to prevent memory leak
        return result;
    }
};

// Self - Runtime at the end
// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         ListNode* temp = l1;
//         ListNode* t1 = l1;
//         ListNode* t2 = l2;
//         int carry = 0;
//         while(t1 && t2){
//             int csum = t1->val + t2->val + carry;
//             if (csum >= 10){
//                 carry = 1;
//                 l1->val = csum%10;
                
//             } else {
//                 carry = 0;
//                 l1->val = csum;
//             }
//             l1 = l1->next;
//             t1 = t1->next;
//             t2 = t2->next;
//         }
//         while(t1){
//             int csum = t1->val + carry;
//             if (csum >= 10){
//                 carry = 1;
//                 l1->val = csum%10;
//             } else {
//                 carry = 0;
//                 l1->val = csum;
//             }
//             l1 = l1->next;
//             t1 = t1->next;
//         }
//         while(t2){
//             int csum = t2->val + carry;
//             if (csum >= 10){
//                 carry = 1;
//                 l1->val = csum%10;
//             } else {
//                 carry = 0;
//                 l1->val = csum;
//             }
//             l1 = l1->next;
//             t2 = t2->next;
//         }
//         if (carry >= 1){
//             ListNode* fcarry = new ListNode(carry);
//             l1->next = fcarry; // runtime coz l1 is NULL, we have to make a new LL to store solution
//         }
//         return temp;
//     }
// };