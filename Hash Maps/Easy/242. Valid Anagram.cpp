class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp1;
        bool flag;
        if(s.size()!=t.size()){
            return false;
        }
        for(auto c:s){
            mp1[c]++;
        }
        for(auto c:t){
            if(mp1[c]-1>=0){
                mp1[c]--;
                flag = true;
            }else{
                return false;
            }
        }
        return flag;
    }
};