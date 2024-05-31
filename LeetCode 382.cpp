// LeetCode 382. Linked List Random Node
//  https://www.youtube.com/watch?v=9vC4I5sKFsw&list=PLpIkg8OmuX-LH398-_ZcuHiRueOdsJbXU&index=6

// Approsch - 1
/**
 class Solution {
public:
    vector<int> arr;

    Solution(ListNode* head) {
        ListNode* temp = head;

        while(temp != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
    }

    int getRandom() {
        int n = arr.size();

        int random_index = rand()%n; //{0, 1, ......n - 1}

        return arr[random_index];
    }
};
*/

// Approach - 2
// Reservoir Sampling
/**
 class Solution {
public:

    ListNode* Head;

    Solution(ListNode* head) {
        Head = head;
    }

    int getRandom() {
        int count = 1;
        int result = 0;

        ListNode* temp = Head;

        while(temp != NULL){
            if(rand() % count < 1.0/count){
                result = temp -> val;
            }

            count++;
            temp = temp -> next;
        }
        return result;
    }
};
*/