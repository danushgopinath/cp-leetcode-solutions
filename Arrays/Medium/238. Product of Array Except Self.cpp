class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> newArr;
        int productL = 1;
        int productR = 1;
        for(int i=0; i<nums.size(); i++){
            newArr.push_back(productL);
            productL = productL * nums[i];
        }
        for(int i=nums.size()-1; i>-1; i--){
            newArr[i] = newArr[i] * productR;
            productR = productR * nums[i];
        }
        return newArr;
    }
};