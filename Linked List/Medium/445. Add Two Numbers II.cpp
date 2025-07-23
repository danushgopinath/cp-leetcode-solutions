class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        while (head != nullptr) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1 = reverse(l1);
        l2 = reverse(l2);

        ListNode* result = nullptr;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr || carry) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            ListNode* node = new ListNode(sum % 10);
            node->next = result;
            result = node;

            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }

        return result; 
    }
};
