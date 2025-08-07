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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        vector<int> v1;
        while(curr){
            int val = curr->val;
            curr = curr->next;
            v1.push_back(val);
        }
        swap(v1[k-1], v1[v1.size()-k]);
        ListNode dummy(0);
        ListNode* newHead = &dummy;
        ListNode* temp = &dummy;
        for(int i=0; i<v1.size(); i++){
            cout<<v1[0];
            ListNode* newNode = new ListNode(v1[i]);
            temp->next = newNode;
            temp = temp->next;
        }
        return newHead->next;
    }
};