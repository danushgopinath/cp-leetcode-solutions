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
    ListNode* reverse(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while(curr){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }

    ListNode* removeNodes(ListNode* head) {
        ListNode* newHead = reverse(head);
        ListNode* curr = newHead->next;
        ListNode* prev = newHead;
        int nextMax = newHead->val;
        while(curr){
            if(nextMax > curr->val){
                prev->next = curr->next;
                curr = prev->next;
            }else{
                nextMax = curr->val;
                prev = curr;
                curr = curr->next;
            }
        }
        ListNode* finalHead = reverse(newHead);
        return finalHead;
    }
};