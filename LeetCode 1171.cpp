// LeetCode 1171. Remove Zero Sum Consecutive Nodes from Linked List
// https://www.youtube.com/watch?v=5UWEVMg10rY

/**
 class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        int prefixSum = 0;
        unordered_map<int, ListNode*> mpp;

        ListNode* dummyNode = new ListNode(0);
        dummyNode -> next = head;
        mpp[0] = dummyNode;

        while(head != NULL){
            prefixSum += head -> val;

            if(mpp.find(prefixSum) != mpp.end()){
                //Delete Operation
                ListNode* start = mpp[prefixSum];
                ListNode* temp = start;

                int pSum = prefixSum;

                while(temp != head){

                    temp = temp -> next;
                    pSum += temp -> val;

                    if(temp != head){
                        mpp.erase(pSum);
                    }
                    start -> next = head -> next;
                }
            }else{
                mpp[prefixSum] = head;
            }
            head = head -> next;
        }
        return dummyNode -> next;
    }
};
*/