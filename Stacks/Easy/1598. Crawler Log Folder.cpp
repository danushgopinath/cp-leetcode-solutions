class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack<string> stk;
        for(int i=0; i<logs.size(); i++) {
            if(logs[i]=="../" && !stk.empty()){
                stk.pop();
            }else if(logs[i]=="./"){
                continue;
            }else if(logs[i]!="../" && logs[i]!="./"){
                stk.push(logs[i]);
            }
        }
        if(!stk.empty()){
            cout<<stk.top();
        }
        return stk.size();
    }
};