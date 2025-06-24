class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> m1;
        for(auto x:candyType){
            m1[x]++;
        }
        if(m1.size()>candyType.size()/2){
            return candyType.size()/2;
        }
        return m1.size();
    }
};