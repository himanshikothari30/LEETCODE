class Solution {
public:
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast = head;
    ListNode* slow = head;

    // Step 1: move fast n steps
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }

    // Step 2: if deleting head
    if (fast == NULL) {
        return head->next;
    }

    // Step 3: move both
    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    // Step 4: delete node
    slow->next = slow->next->next;

    return head;
}
};
