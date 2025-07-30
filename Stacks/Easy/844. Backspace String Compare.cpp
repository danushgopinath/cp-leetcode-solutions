class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st1;
        stack<char> st2;
        for(auto c:s){
            if(c=='#'){
                if(!st1.empty()){
                    st1.pop();
                }
            }else{
                st1.push(c);
            }
        }
        for(auto c:t){
            if(c=='#'){
                if(!st2.empty()){
                    st2.pop();
                }
            }else{
                st2.push(c);
            }
        }
        int size1 = st1.size();
        int size2 = st2.size();
        if(size1!=size2){
            return false;
        }
        while(size1>0){
            if(st1.top()!=st2.top()) return false;
            st1.pop();
            st2.pop();
            size1--;
        }
        return true;
    }
};