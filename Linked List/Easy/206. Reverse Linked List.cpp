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
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* temp = nullptr;
        while(curr){
            int val = curr->val;
            curr = curr->next;
            ListNode* rL = new ListNode(val);
            rL->next = temp;
            temp = rL; 
        }
        return temp;
    }
};