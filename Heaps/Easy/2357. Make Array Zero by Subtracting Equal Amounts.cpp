class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        // unordered_set<int> s1;
        // for(int n:nums) {
        //     if(n!=0) s1.insert(n);
        // }
        // return s1.size();
        priority_queue<int> pq1;

        for(int i=0; i<nums.size(); i++) {
            pq1.push(nums[i]);
        }

        int subCnt = 0;
        int cnt = 0;

        while(!pq1.empty()) {
            if(pq1.top()==0) pq1.pop();
            else{
                int top = pq1.top() - subCnt;
                if(top!=0) {
                    subCnt += top;
                    cnt++;
                }
                pq1.pop();
            } 
        }
        return cnt;
    }
};