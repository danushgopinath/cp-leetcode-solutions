class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> myMap;
        int n = nums.size();

        for(int i=0; i<n; i++){
            myMap[nums[i]]++;
        }

        for(auto x:myMap){
            if(x.second>n/2){
                return x.first;
            }
        }
        return 0;
    }
};