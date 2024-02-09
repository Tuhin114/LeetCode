// LeetCode 19. Remove Nth Node From End of List
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

// Brute Force approach (Incorrect 189/208 test casses passed)
//  class Solution {
//  private:
//      int getLength(ListNode* head){
//          ListNode* temp = head;
//          int count = 0;
//          while(temp != NULL){
//              temp = temp -> next;
//              count++;
//          }
//          return count;
//      }
//  public:
//      ListNode* removeNthFromEnd(ListNode* head, int n) {
//          if(head == NULL || head -> next == NULL){
//              return NULL;
//          }
//          ListNode* curr = head;
//          int N = getLength(head);
//          int k = 0;
//          while(k < N - 1 - n){
//              curr = curr -> next;
//              k++;
//          }
//          if(k > 0){
//              curr -> next = curr -> next -> next;
//              return head;
//          }else if(k == -1){
//              curr -> next = NULL;
//              return
//          }else{
//              curr = curr -> next;
//              return curr;
//          }
//      }
//  };

// Optimal
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
//     ListNode* removeNthFromEnd(ListNode* head, int n) {
//         ListNode* slow = head;
//         ListNode* fast = head;

//         for(int i = 0; i < n; i++){
//             fast = fast -> next;
//         }

//         if(fast == NULL){
//             return head -> next;
//         }

//         while(fast -> next != NULL){
//             fast = fast -> next;
//             slow = slow -> next;
//         }

//         ListNode* delNode = slow -> next;
//         slow -> next = slow -> next -> next;
//         delete delNode;
//         return head;
//     }
// };