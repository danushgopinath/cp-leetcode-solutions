class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> v1;
        int j = 0;
        for(int i=0; i<operations.size(); ++i){
            if(operations[i]=="+"){
                int plus = v1[j-1] + v1[j-2];
                v1.push_back(plus);
                j++;
            }else if(operations[i]=="C"){
                v1.erase(v1.begin() + j);
                j--;
            }else if(operations[i]=="D"){
                int doubleNum = 2 * v1[j-1];
                v1.push_back(doubleNum);
                j++;
            }else{
                v1.push_back(stoi(operations[i]));
                j++;
            }
        }

        int sum = 0;
        for(auto x:v1){
            sum += x;
        }
        return sum;
    }
};