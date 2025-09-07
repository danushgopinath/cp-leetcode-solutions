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
    int lengthLL(ListNode* head) {
        int cnt = 0;
        ListNode* curr = head;
        while(curr) {
            cnt += 1;
            curr = curr->next;
        }
        return cnt;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){
            return nullptr;
        }
        int cnt = lengthLL(head);
        if(k % cnt == 0){
            return head;
        }
        int cnt1 = k % cnt;
        int remain = cnt - cnt1;
        ListNode* curr = head;
        ListNode* prev = nullptr;
        while(remain>0 && curr->next) {
            prev = curr;
            curr = curr->next;
            remain--;
        }
        while(curr->next){
            curr = curr->next;
        }
        ListNode* newHead = prev->next;
        curr->next = head;
        prev->next = nullptr;
        return newHead;
    }
};