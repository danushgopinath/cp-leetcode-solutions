class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==val){
                nums[i]=-100;
                k++;
            }
        }
        k = nums.size() - k;
        sort(nums.begin(), nums.end(), greater<>());
        return k;
    }
};