// LeetCode 143. Reorder List

// https://leetcode.com/problems/reorder-list/solutions/1640556/c-easy-to-solve-beginner-friendly-with-detailed-explanation-and-dry-run/?envType=daily-question&envId=2024-03-23

// Brute force(recursion)
/**
 class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head || !head -> next || !head -> next -> next){
            return;
        }

        ListNode* penultimate = head;
        while(penultimate -> next -> next){
            penultimate = penultimate -> next;
        }

        penultimate -> next -> next = head -> next;
        head -> next = penultimate -> next;

        penultimate -> next = NULL;

        reorderList(head -> next -> next);
    }
};
*/

// Optimal Approach(2 pointer approach)
/**
class Solution {
public:
    void reorderList(ListNode* head) {
        if(!head){
            return;
        }

        ListNode *temp = head, *half = head, *prev = NULL;
        while(temp -> next && temp -> next -> next){
            temp = temp -> next -> next;
            half = half -> next;
        }

        if(temp -> next){
            half = half -> next;
        }

        while(half){
            temp = half -> next;
            half -> next = prev;
            prev = half;
            half = temp;
        }
        half = prev;

        while(head && half){
            temp = head -> next;
            prev = half -> next;
            head -> next = half;
            half -> next = temp;
            head = temp;
            half = prev;
        }

        if(head && head -> next){
            head -> next -> next = NULL;
        }
    }
};
*/