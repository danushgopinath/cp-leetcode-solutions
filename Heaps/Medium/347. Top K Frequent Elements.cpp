class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m1;
        for(auto x:nums) {
            m1[x]++;
        }

        auto cmp = [](pair<int, int>& a, pair<int, int>& b) {
            return a.second > b.second; 
        };

        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> minHeap(cmp);

        for(auto x:m1) {
            minHeap.push(x);
            if(minHeap.size()>k) {
                minHeap.pop();
            }
        }
        vector<int> result;
        while(!minHeap.empty()) {
            result.push_back(minHeap.top().first);
            minHeap.pop();
        }
        return result;
    }
};