// LeetCode 148. Sort List
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

/**
class Solution {
public:

    //Brute force Solution
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        ListNode* temp = head;

        // Extract values from the linked list and store them in the vector
        while(temp != nullptr){
            arr.push_back(temp->val);
            temp = temp->next;
        }

        // Sort the vector
        sort(arr.begin(), arr.end());

        // Update the linked list with sorted values
        temp = head;
        for(int i = 0; temp != nullptr; i++){
            temp->val = arr[i];
            temp = temp->next;
        }
        return head;
    }
};
*/

/**
//Optimal Solutions
 class Solution {
private:
    ListNode* findMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head->next; // head->next because we want slow to point to the first element/middle in the even length case
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    // merge linked list function
    ListNode* mergeBoth(ListNode* list1Head, ListNode* list2Head) {
        ListNode* dummyNode = new ListNode(-1); // can be any value
        ListNode* temp = dummyNode;

        while (list1Head != NULL && list2Head != NULL) {
            if (list1Head->val <= list2Head->val) {
                temp->next = list1Head;
                temp = list1Head;
                list1Head = list1Head->next;
            } else {
                temp->next = list2Head;
                temp = list2Head;
                list2Head = list2Head->next;
            }
        }
        // if list1 still has elements left
        while (list1Head != NULL) {
            temp->next = list1Head;
            temp = list1Head;
            list1Head = list1Head->next;
        }

        // if list2 still has elements left
        while (list2Head != NULL) {
            temp->next = list2Head;
            temp = list2Head;
            list2Head = list2Head->next;
        }
        return dummyNode->next;
    }

public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }
        ListNode* middle = findMiddle(head);
        ListNode* leftHead = head;
        ListNode* rightHead = middle -> next;
        middle -> next = NULL;
        leftHead = sortList(leftHead);
        rightHead = sortList(rightHead);

        return mergeBoth(leftHead, rightHead);
    }
};
*/