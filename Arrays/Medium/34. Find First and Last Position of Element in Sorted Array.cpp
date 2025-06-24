class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        vector<int> arr = {-1,-1};
        int count = 0;

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == target && count == 0) {
                first = i;
                last = i;
                count = 1;
            } else if (nums[i] == target) {
                last = i;
            }
        }   
        if (first == -1 && last == -1) {
            return arr;
        } else if (nums.size()==1 && nums[0]==target) {
            vector<int> zero = {0,0};
            return zero;
        } else { 
            vector<int> arr1 = {first, last};
            return arr1;
        }
    }
};