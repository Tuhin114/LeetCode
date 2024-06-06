// LeetCode 24. Swap Nodes in Pairs
//  https://www.youtube.com/watch?v=8yLiGS4ntHw&list=PLpIkg8OmuX-LH398-_ZcuHiRueOdsJbXU&index=11

/**
 class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head -> next)  return head;

        //A = head
        //B = head -> next
        //C = head -> next -> next
        //A -> B -> C -> ....

        ListNode* temp = head -> next;
        head -> next = swapPairs(head -> next -> next);
        temp -> next = head;

        return temp;
    }
};
*/