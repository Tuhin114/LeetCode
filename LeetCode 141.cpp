// LeetCode 141. Linked List Cycle

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
// class Solution {
// public:
//     bool hasCycle(ListNode *head) {
//         ListNode* fast = head;
//         ListNode* slow = head;

//         while(fast != NULL && fast -> next != NULL){
//             fast = fast -> next;
//             if(fast != NULL){
//                 fast = fast -> next;
//             }
//             slow = slow -> next;

//             if(fast == slow){
//                 return 1;
//             }
//         }
//         return 0;
//     }
// };