class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxVal = 0;

        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(prices[i]>=prices[j]){
                    break;
                }
                else if(prices[j]-prices[i]>maxVal){
                    maxVal = prices[j] - prices[i];
                }
            }
        }
        return maxVal;
    }
};