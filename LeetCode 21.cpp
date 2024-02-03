// LeetCode 21. Merge Two Sorted Lists

// class Solution {
// private:
//     ListNode* solve(ListNode* first, ListNode* second) {

//         // If only one element is present in the first list
//         if (first->next == nullptr) {
//             first->next = second;
//             return first;
//         }

//         ListNode* curr1 = first;
//         ListNode* next1 = curr1->next;
//         ListNode* curr2 = second;
//         ListNode* next2 = curr2->next;

//         while (next1 != nullptr && curr2 != nullptr) {
//             if ((curr2->val >= curr1->val) && (curr2->val <= next1->val)) {

//                 // Add node in between the first list
//                 curr1->next = curr2;
//                 next2 = curr2->next;
//                 curr2->next = next1;

//                 // Update pointers
//                 curr1 = curr2;
//                 curr2 = next2;
//             } else {
//                 // Move curr1 and next1 forward
//                 curr1 = next1;
//                 next1 = next1->next;

//                 if (next1 == nullptr) {
//                     curr1->next = curr2;
//                     return first;
//                 }
//             }
//         }
//         return first;
//     }

// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

//         if (list1 == nullptr) {
//             return list2;
//         }
//         if (list2 == nullptr) {
//             return list1;
//         }
//         if (list1->val <= list2->val) {
//             return solve(list1, list2);
//         } else {
//             return solve(list2, list1);
//         }
//     }
// };
