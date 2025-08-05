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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp1 = head->next;
        ListNode* temp2 = head;
        int sum = 0;
        while(temp1){
            if(temp1->val != 0){
                sum += temp1->val;
                temp1 = temp1->next;
            }else{
                temp2->next = temp1->next;
                temp2->val = sum;
                temp2 = temp2->next;
                temp1 = temp1->next;
                sum = 0;
            }
        }
        return head;
    }
};