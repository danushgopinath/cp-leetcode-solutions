class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> m1;
        for(int i=0; i<bills.size(); i++){
            if(bills[i]==5){
                m1[5]++;
            }else if(bills[i]==10){
                m1[10]++;
                if(m1[5]>=1){
                    m1[5] = m1[5] - 1;
                    continue;
                }else{
                    return false;
                }
            }else if (bills[i]==20){
                m1[20]++;
                if(m1[5]>=1 && m1[10]>=1){
                    m1[5] = m1[5] - 1;
                    m1[10] = m1[10] - 1;
                    continue;
                }else if(m1[5]>=3){
                    m1[5] = m1[5] - 3;
                    continue;
                }else{
                    return false;
                }
            }
        }
        return true;
    }
};