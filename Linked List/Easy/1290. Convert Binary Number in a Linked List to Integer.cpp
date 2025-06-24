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
    int getDecimalValue(ListNode* head) {
        int count = 0;
        ListNode* curr = head;
        while(curr){
            count++;
            curr = curr->next;
        }
        
        int num = 0;
        ListNode* val = head;
        while(val){
            if(val->val==1){
                num = num + pow(2,--count);
                val = val->next;
            }else{
                val = val->next;
                count--;
            }
        }
        return  num;
    }
};