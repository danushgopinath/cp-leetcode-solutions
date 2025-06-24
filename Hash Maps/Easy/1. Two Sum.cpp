class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp1;

        for(int i=0; i<nums.size()-1; i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]+nums[j]==target){
                    mp1[i] = j;
                }
            }
        }
        auto it = mp1.begin();
        int i = it->first;
        int j = it->second;
        return {i, j};
    }
};