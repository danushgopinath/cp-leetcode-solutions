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
    ListNode* reverseK(ListNode* temp1, ListNode* temp2){
        ListNode* prev = nullptr;
        while(temp1!=temp2){
            ListNode* tempNode = temp1->next;
            temp1->next = prev;
            prev = temp1;
            temp1 = tempNode;
        }
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head) return nullptr;
        
        ListNode* tail = head;
        for(int i=0; i<k; i++){
            if(!tail) return head;
            tail = tail->next;
        }

        ListNode* newHead = reverseK(head, tail);
        head->next = reverseKGroup(tail, k);
        return newHead;
    }
};