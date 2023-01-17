class Solution{
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *res = head;
        int count = 0;
        while (res != NULL) {
            count += 1;
            res = res->next;
        }
        res = head;
        for (int i = 0; i < count / 2; i++) {
            res = res->next;
        }
        return res;
    }
};