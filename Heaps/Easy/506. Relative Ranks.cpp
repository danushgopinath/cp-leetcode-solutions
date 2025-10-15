class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();

        priority_queue<pair<int, int>> pq1;
        for(int i=0; i<n; i++){
            pq1.push({score[i], i});
        }

        vector<string> result(n);
        int place = 1;
        while(!pq1.empty()) {
            int orgIndex = pq1.top().second;
            pq1.pop();
            if(place==1) {
                result[orgIndex] = "Gold Medal";
            } else if(place == 2) {
                result[orgIndex] = "Silver Medal";
            } else if(place == 3) {
                result[orgIndex] = "Bronze Medal";
            } else {
                result[orgIndex] = to_string(place);
            }
            place++;
        }
        return result;
    }
};