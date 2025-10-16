class KthLargest {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int num;
public:
    KthLargest(int k, vector<int>& nums) {
        num = k;
        for(int i=0; i<nums.size(); i++) {
            minHeap.push(nums[i]);
            if(minHeap.size() > k) {
                minHeap.pop();
            }
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if(minHeap.size() > num) {
            minHeap.pop();
        }
        return minHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */