class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m1;
        int l = 0;
        int maxLength = 0;
        int n = s.size();
        
        for (int r = 0; r < n; r++) {
            if (m1.count(s[r])) {
                l = max(l, m1[s[r]]);
            }
            maxLength = max(maxLength, r - l + 1);
            m1[s[r]] = r + 1;  
        }
        
        return maxLength;
    }
};
