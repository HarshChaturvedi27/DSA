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
    bool isPalindrome(ListNode* head) {

        //FINDING MID+1 OF LL
        ListNode*fast = head;
        ListNode*slow = head;
        while (fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        // REVERSING LL AFTER MID
        ListNode*prev = NULL;
        ListNode*curr = slow;
        ListNode*next = curr;
        while (curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        // CHECKING FOR PALINDROME
        ListNode* start = head;
        ListNode* end = prev;
        while(end){ // COZ END LL WILL EXHAUST FIRST & START LL HAS THE EXTRA ELEMENT
            if (end->val != start->val) return false;
            end = end->next;
            start = start->next;
        }

        // CORRECTING LL
        curr = prev;
        prev = NULL;
        next = curr;
        while (curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return true;

    }
};

// class Solution {
// public:
//     bool isPalindrome(ListNode* head) {
//         string s1, s2;
//         ListNode* slow = head;
//         ListNode* fast = head;

//         if (!head->next) return true;
//         if (!head->next->next){
//             return head->val == head->next->val;
//         }
//         while (fast && fast->next){
//             s1 += slow->val;
//             slow = slow->next;
//             fast = fast->next->next;
//         }
//         while (slow){
//             s2 += slow->val;
//             slow = slow->next;
//         }
//         if (s1.length() != s2.length()){
//             s2.erase(0, 1);
//         }
//         reverse(s2.begin(), s2.end());
//         return s1 == s2;
//     }
// };