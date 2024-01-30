// LeetCode 25. Reverse Nodes in k-Group
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
// class Solution {
// public:
//     ListNode* reverseKGroup(ListNode* head, int k) {
//         // Base Call
//     if (head == nullptr || k <= 1) {
//         return head;
//     }

//     // Count the number of nodes
//     int count = 0;
//     ListNode* temp = head;
//     while (temp != nullptr) {
//         count++;
//         temp = temp->next;
//     }

//     // Step 1: Reverse full groups of k nodes
//     if (count >= k) {
//         ListNode* next = nullptr;
//         ListNode* curr = head;
//         ListNode* prev = nullptr;
//         int reversedCount = 0;

//         while (curr != nullptr && reversedCount < k) {
//             next = curr->next;
//             curr->next = prev;
//             prev = curr;
//             curr = next;
//             reversedCount++;
//         }

//         // Step 2: Recursion for the next group
//         if (next != nullptr) {
//             head->next = reverseKGroup(next, k);
//         }

//         // Step 3: Return the new head of the reversed portion
//         return prev;
//     } else {
//         // If there are less than k nodes, no reversal needed
//         return head;
//     }
//     }
// };