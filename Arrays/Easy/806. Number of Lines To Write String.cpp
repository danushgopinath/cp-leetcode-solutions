class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;  
        int sum = 0;    
        
        for(char c : s) {
            int w = widths[c - 'a']; 
            if (sum + w > 100) {
                lines++;
                sum = w; 
            } else {
                sum += w;
            }
        }
        
        return {lines, sum};
    }
};
