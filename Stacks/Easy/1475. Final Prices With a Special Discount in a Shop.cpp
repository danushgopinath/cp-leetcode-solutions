class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        //WITH STACK
        stack<int> st; 
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            while (!st.empty() && prices[i] <= prices[st.top()]) {
                int idx = st.top();
                st.pop();
                prices[idx] -= prices[i];
            }
            st.push(i);
        }

        return prices;

        //WIHTOUT STACK
        // vector<int> v1;
        // for(int i=0; i<prices.size(); i++){
        //     for(int j=i+1; j<prices.size(); j++){
        //         if(prices[j]<=prices[i]){
        //             cout<<prices[i]<<prices[j]<<endl;
        //             v1.push_back(prices[i]-prices[j]);
        //             break;
        //         }else if(j==prices.size()-1){
        //             v1.push_back(prices[i]);
        //             break;
        //         }
        //     }   
        // }
        // v1.push_back(prices[prices.size()-1]);
        // return v1;
    }
};