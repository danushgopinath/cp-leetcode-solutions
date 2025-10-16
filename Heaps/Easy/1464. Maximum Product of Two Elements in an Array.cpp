class Solution {
public:
    int maxProduct(vector<int>& nums) {
        vector<int> v1;
        priority_queue<int> maxHeap;
        for(auto x:nums) {
            maxHeap.push(x);
        }    
        for(int i=0; i<2; i++) {
            int x = maxHeap.top();
            maxHeap.pop();
            auto it = find(nums.begin(), nums.end(), x);
            int ind = distance(nums.begin(), it);
            v1.push_back(ind);
        }
        int i = v1[0]; cout<<i;
        int j = v1[1]; cout<<j;
        return (nums[i]-1) * (nums[j]-1);
    }    
};