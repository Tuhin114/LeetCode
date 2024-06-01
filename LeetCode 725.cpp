// LeetCode 725. Split Linked List in Parts
//  https://www.youtube.com/watch?v=tY1HevJFD98&t=1049s

/**
 class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        //1 - Find the length of LinkedList - L
        ListNode* curr = head;
        int L = 0;
        while(curr){
            L++;
            curr = curr -> next;
        }

        int eachBucketNodes = L/k;
        int remainderNodes = L%k;

        vector<ListNode*> result(k, 0);

        curr = head;
        ListNode* prev = NULL;

        for(int i = 0; i < k; i++){
            result[i] = curr;

            for(int count = 1; count <= eachBucketNodes + (remainderNodes > 0 ? 1 : 0); count++){
                prev = curr;
                curr = curr -> next;
            }
            if(prev != NULL)    prev -> next = NULL;
            remainderNodes--;
        }
        return result;
    }
};
*/