class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size();
        for(int i=0; i<n; i++){
            if(citations[i]>=(n-i)){
                return n-i;
            }
        }
        return 0;
    }
};