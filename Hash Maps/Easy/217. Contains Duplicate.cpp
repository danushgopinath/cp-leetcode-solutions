class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> m1;
        for(int i=0; i<nums.size(); i++){
            m1[nums[i]]++;
        }
        for(auto x:m1){
            cout<<x.second<<endl;
            if(x.second>1){
                return true;
            }
        }
        return false;
    }
};