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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> v1;
        ListNode* temp1 = head;
        while(temp1){
            int max = 0;
            int val = temp1->val;
            ListNode* temp2 = temp1;
            while(temp2){
                if(val < temp2->val){
                    val = temp2->val;
                    temp2 = temp2->next;
                    break;
                }else{
                    temp2 = temp2->next;
                }
            }
            if(val == temp1->val){
                v1.push_back(0);
            }else{
                v1.push_back(val);
            }
            temp1 = temp1->next;
        }
        return v1;
    }
};