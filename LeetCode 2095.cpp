// LeetCode 2095-Delete the Middle Node of a Linked List
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
// Approach 1
//     ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL || head -> next == NULL){
//             return NULL;
//         }
//         ListNode* slow = head;
//         ListNode* fast = head;
//         fast = fast -> next -> next;
//         while(fast != NULL && fast -> next != NULL){
//             slow = slow -> next;
//             fast = fast -> next -> next;
//         }
//         ListNode* middle = slow -> next;
//         slow -> next = slow -> next -> next;
//         delete middle;
//         return head;
//     }

// Approach 2
// ListNode* deleteMiddle(ListNode* head) {
//         if(head == NULL || head -> next == NULL){
//             return NULL;
//         }
//         ListNode* slow = head;
//         ListNode* fast = head;
//         ListNode* prev = NULL;

//         while(fast != NULL && fast -> next != NULL){
//             prev = slow;
//             slow = slow -> next;
//             fast = fast -> next -> next;
//         }
//         prev -> next = slow -> next;
//         delete slow;
//         return head;
//     }
// };