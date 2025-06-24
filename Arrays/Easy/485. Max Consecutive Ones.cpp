class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int count = 0;
        int n = 0;
        while(n<nums.size()){
            if(nums[n]==1){
                count = count + 1;
            }else{
                count = 0;
            }
            n++;
            if(maxCount<count){
                maxCount = count;
            }
        }
        return maxCount;
    }
};