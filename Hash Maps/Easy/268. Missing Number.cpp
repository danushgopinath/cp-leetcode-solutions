class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int num;
        for (int i=0; i<=n; i++) {
            if (std::find(nums.begin(), nums.end(), i) !=nums.end()){
                continue;
            } else {
                num = i;
                break;
            }
        }
        return num;
    }
};