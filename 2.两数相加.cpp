class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* root = new ListNode(0);
        ListNode* cur = root;
        int ind = 0;
        while (l1 || l2 || ind) {
            int val1 = (l1 != NULL ? l1->val : 0);
            int val2 = (l2 != NULL ? l2->val : 0);
            int sum = ind + val1 +val2;
            ind = sum / 10;

            ListNode* sumNode = new ListNode(sum % 10);
            cur->next = sumNode;
            cur = sumNode;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return root->next;
    }
};
