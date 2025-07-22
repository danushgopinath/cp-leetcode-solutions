class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> strength; 

        for (int i = 0; i < mat.size(); i++) {
            int cnt = 0;
            for (int j = 0; j < mat[i].size(); j++) {
                if (mat[i][j] == 1)
                    cnt++;
                else
                    break; 
            }
            strength.push_back({cnt, i});
        }

        sort(strength.begin(), strength.end()); 

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(strength[i].second);
        }

        return result;
    }
};
