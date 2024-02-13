// LeetCode 160. Intersection of Two Linked Lists
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Approach 1 Brute force

/**
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        while (headB != NULL)
        {
            ListNode *temp = headA;
            while (temp != NULL)
            {
                // If both nodes are same
                if (temp == headB)
                {
                    return headB;
                }
                else
                {
                    temp = temp->next;
                }
            }
            headB = headB->next;
        }
        // Intersection is not present
        return NULL;
    }
};

//Approach 2 Hash Map
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode*> st;
        while(headA != NULL){
            st.insert(headA);
            headA = headA -> next;
        }
        while(headB != NULL){
            if(st.find(headB) != st.end()){
                return headB;
            }else{
                headB = headB -> next;
            }
        }
        return NULL;
    }
};

//Approach 3 length diff Solutions
class Solution {
private:
    int getDifference(ListNode *headA, ListNode *headB){
        int len1 = 0, len2 = 0;
        while(headA != NULL || headB != NULL){
            if(headA != NULL){
                ++len1;
                headA = headA -> next;
            }
            if(headB != NULL){
                ++len2;
                headB = headB -> next;
            }
        }
        return len1 - len2;
    }
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int diff = getDifference(headA,headB);
        if(diff < 0){
            while(diff++ != 0){
                headB = headB -> next;
            }
        }else{
                while(diff-- != 0){
                    headA = headA -> next;
                }
            }
            while(headA != NULL){
                if(headA == headB){
                    return headA;
                }
                headB = headB -> next;
                headA = headA -> next;
            }
        return headA;
    }
};
//Approach 4 Optimal Solutions
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* d1 = headA;
        ListNode* d2 = headB;

        while(d1 != d2){
            d1 = d1 == NULL ? headB : d1 -> next;
            d2 = d2 == NULL ? headA : d2 -> next;
        }
        return d1;
    }
};
*/