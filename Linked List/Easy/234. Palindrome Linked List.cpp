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
    bool isPalindrome(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = nullptr;

        if(head && head->next==NULL){
            return true;
        }

        while(temp1){
            ListNode* newNode = new ListNode(temp1->val);
            newNode->next = temp2;
            temp2 = newNode;
            temp1 = temp1->next;
        }

        while(temp2 && head){
            if(temp2->val == head->val){
                temp2 = temp2->next;
                head = head->next;
            }else{
                return false;
            }
        }
        return true;
    }
};