class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* first = head, * second = head;
        while (first && first->next) {
            second = second->next;
            first = first->next->next;
            if (second == first) return true;
        }
        return false;
    }
};
