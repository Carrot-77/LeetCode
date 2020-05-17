class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode ret, *p = &ret;
        ret.next = NULL;
        while (l1 || l2) {
            if (l2 == NULL || (l1 && l1->val < l2->val)) {
                p->next = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                l2 = l2->next;
            }
            p = p->next;
            p->next = NULL;
        }
        return ret.next;
    }
};
