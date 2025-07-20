class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> positions;
        vector<int> result;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c) {
                positions.push_back(i);
            }
        }

        for (int i = 0; i < s.length(); i++) {
            int minDist = abs(i - positions[0]);
            for (int pos : positions) {
                minDist = min(minDist, abs(i - pos));
            }
            result.push_back(minDist);
        }

        return result;
    }
};
