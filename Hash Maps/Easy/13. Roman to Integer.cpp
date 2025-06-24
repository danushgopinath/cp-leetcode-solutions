class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> nums;
        nums['I'] = 1;
        nums['V'] = 5;
        nums['X'] = 10;
        nums['L'] = 50;
        nums['C'] = 100;
        nums['D'] = 500;
        nums['M'] = 1000;

        int num = 0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
                if(s[i+1]=='V'){
                    num += 4;
                    i++;
                }else if(s[i+1]=='X'){
                    num += 9;
                    i++;
                }
            }else if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
                if(s[i+1]=='L'){
                    num += 40;
                    i++;
                }else if(s[i+1]=='C'){
                    num += 90;
                    i++;
                }
            }else if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
                if(s[i+1]=='D'){
                    num += 400;
                    i++;
                }else if(s[i+1]=='M'){
                    num += 900;
                    i++;
                }
            }else{
                num += nums[s[i]];
            }   
        }
        return num;
    }
};