class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind;
        auto it = find(nums.begin(), nums.end(), target);
        if(it != nums.end()){
            ind = distance(nums.begin(), it);
        }else{
            return -1;
        } 
        return ind;
    }
};