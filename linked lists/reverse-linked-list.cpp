class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode* shead = reverseList(head->next);  // reverse rest of the list
        head->next->next = head;  // make the next node point back to head
        head->next = nullptr;     // set head->next to null
        return shead;
    }
};
