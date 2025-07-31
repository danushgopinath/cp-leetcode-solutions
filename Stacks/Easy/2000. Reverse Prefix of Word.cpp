class Solution {
public:
    string reversePrefix(string word, char ch) {
        //WITHOUT STACK
        // int index = word.find(ch);
        // int n = word.length();
        // string firstHalf = word.substr(0, index+1);
        // reverse(firstHalf.begin(), firstHalf.end());
        // string secondHalf = word.substr(index+1, n);
        // string result = firstHalf + secondHalf;
        // return result;

        //WITH STACK
        stack<char> stk;
        string result = "";
        bool found = false;

        for(auto c:word){
            stk.push(c);
            if(c==ch){
                found = true;
                break;
            }
        }
        if(found){
            while(!stk.empty()){
                result = result + stk.top();
                stk.pop();
            }
            result = result + word.substr(result.size());
        }else{
            result = word;
        }
        return result;        
    }
};