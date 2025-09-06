/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry = 0;
        ListNode* newHead = reverse(head);
        ListNode* curr = newHead;
        ListNode* prev = nullptr;
        while(curr) {
            int newValue = curr->val*2 + carry;
            curr->val = newValue % 10;
            if(newValue>9) {
                carry = 1;
            }else {
                carry = 0;
            }
            prev = curr;
            curr = curr->next;
        }
        if(carry!=0) {
            ListNode* extraNode = new ListNode(carry);
            prev->next = extraNode;
        }
        ListNode* result = reverse(newHead);
        return result;
    }
};