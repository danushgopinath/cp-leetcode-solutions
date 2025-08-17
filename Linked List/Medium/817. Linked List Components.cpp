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
    int numComponents(ListNode* head, vector<int>& nums) {
        std::unordered_set<int> S(nums.begin(), nums.end());
        int cnt = 0;
        for (ListNode* cur = head; cur != nullptr; cur = cur->next) {
            if (S.count(cur->val) && (!cur->next || !S.count(cur->next->val))) {
                ++cnt;  
            }
        }
        return cnt;
    }
};