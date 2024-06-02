// LeetCode 109. Convert Sorted List to Binary Search Tree
// https://www.youtube.com/watch?v=4zvmruet_H0&t=378s

/**
 TreeNode* sortedListToBST(ListNode* head) {
        if(!head)
            return NULL;
        if(!head->next)
            return new TreeNode(head->val);

        //Find mid and make it root
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* slow_prev = NULL;
        while(fast && fast->next) {
            slow_prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }


        TreeNode* root = new TreeNode(slow->val); //Make root
        slow_prev->next = NULL; //We only want left half of linked list for left subtree

        root->left  = sortedListToBST(head);       //Make left subtree
        root->right = sortedListToBST(slow->next); //Make right subtree

        return root; //return root

    }
*/