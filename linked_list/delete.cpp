class Solution {
public:
    void deleteNode(ListNode* node) {
       
        node->val = node->next->val;      // copy next value
        node->next = node->next->next;
        
    }
};
