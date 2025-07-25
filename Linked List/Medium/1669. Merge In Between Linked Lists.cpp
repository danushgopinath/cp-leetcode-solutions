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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        int cnt1 = 0;
        ListNode* curr1 = list1;
        ListNode* start;
        if(list1 == nullptr){
            return list2;
        }
        while(curr1->next!=nullptr){
            if(cnt1==a-1){
                start = curr1;
                cnt1 = cnt1 + 1;
                for(int i=0; i <= b-a; i++){
                    curr1 = curr1->next;
                }
                break;
            }else{
                curr1 = curr1->next;
                cnt1 = cnt1 + 1;
            }
        }
        ListNode* curr2 = list2;
        while(curr2->next!=nullptr){
            curr2 = curr2->next;
        }
        curr2->next = curr1->next;
        start->next = list2;
        return list1;
    }
};