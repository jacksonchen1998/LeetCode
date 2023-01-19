class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* cur = head;
        while (cur) {
            ListNode* next_node = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next_node;
        }
        return pre;
    }
};