// LeetCode 2487. Remove Nodes From Linked List
// https://leetcode.com/problems/remove-nodes-from-linked-list/description/?envType=daily-question&envId=2024-05-06

// Approach - 1(stack)
/**

class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr = head;

        while(curr != NULL){
            st.push(curr);
            curr = curr -> next;
        }

        curr = st.top();
        st.pop();
        int maxVal = curr -> val;

        ListNode* resultHead = new ListNode(curr -> val);

        while(!st.empty()){
            curr = st.top();
            st.pop();

            if(curr -> val < maxVal){
                continue;   //skip this node
            }else{
                ListNode* newNode = new ListNode(curr -> val);
                newNode -> next = resultHead;
                resultHead = newNode;
                maxVal = curr -> val;
            }
        }
        return resultHead;
    }
};
*/

// Approach - 2(recursion)
/**
 class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        if(head == NULL || head -> next == NULL){
            return head;
        }


        ListNode* nextNode = removeNodes(head -> next);

        if(head -> val < nextNode -> val){
            delete head;
            return nextNode;
        }

        head -> next = nextNode;
        return head;
    }
};
*/

// Approach - 3(Reverse LL)
/**
 class Solution {
public:
    ListNode* reverseList(ListNode* head){
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* last = reverseList(head -> next);
        head -> next -> next = head;
        head -> next = NULL;

        return last;
    }
    ListNode* removeNodes(ListNode* head) {
        head = reverseList(head);

        int maxVal = -1;
        ListNode* prev = NULL;
        ListNode* curr = head;

        while(curr != NULL){
            maxVal = max(maxVal, curr -> val);

            if(curr -> val < maxVal){
                prev -> next = curr -> next;
                ListNode* temp = curr;  //to be deleted
                curr = curr -> next;
                delete(temp);
            }else{
                prev = curr;
                curr = curr -> next;
            }
        }
        return reverseList(head);
    }
};
*/