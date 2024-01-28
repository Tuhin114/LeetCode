// LeetCode - 206. Reverse Linked List

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

// Approach 1
//  class Solution {
//  public:
//      ListNode* reverseList(ListNode* head) {
//          if(head == NULL || head->next == NULL){
//          return head;
//      }
//      ListNode* prev = NULL;
//      ListNode* curr = head;
//      ListNode* forward = NULL;

//     while(curr != NULL){
//         forward = curr -> next;
//         curr -> next = prev;
//         prev = curr;
//         curr = forward;
//     }
//     return prev;
//     }
// };

// Approach 2
// class Solution {
// private:
//     void reverse(ListNode* &head, ListNode* curr, ListNode* prev){
//     //Base Class
//     if(curr == NULL){
//         head = prev;
//         return;
//     }

//     ListNode* forward = curr -> next;
//     reverse(head, forward, curr);
//     curr -> next = prev;
// }
// public:
//     ListNode* reverseList(ListNode* head) {
//     ListNode* curr = head;
//     ListNode* prev = NULL;
//     reverse(head, curr, prev);
//     return head;
//     }
// };

// Approach-3
//  class Solution {
//  private:
//      //It will return head of the reverse list
//      ListNode* reverse1(ListNode* head){
//      //Base case
//      if(head == NULL || head->next == NULL){
//          return head;
//      }

//     ListNode* smallHead = reverse1(head->next);

//     head -> next -> next = head;
//     head -> next = NULL;

//     return smallHead;
// }
// public:
//     ListNode* reverseList(ListNode* head) {
//         return reverse1(head);
//     }
// };