class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode dummy(0, head), *node = &dummy; 
        while (node->next) {
            if (node->next->val == val) node->next = node->next->next; 
            else node = node->next; 
        }
        return dummy.next; 
    }
};