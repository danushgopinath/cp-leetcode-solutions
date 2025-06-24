class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int total = 0;
        int leftSum = 0;
        int rightSum;
        for(auto x:nums){
            total += x;
        }

        for(int i=0; i<nums.size(); i++){
            rightSum = total - leftSum - nums[i];
            if(leftSum == rightSum){
                return i;
            }

            leftSum += nums[i];
        }

        return -1;

        // int leftSum, rightSum;

        // for(int part=0; part<nums.size(); part++){
        //     leftSum = 0;
        //     rightSum = 0;
        //     for(int i=0; i<part; i++){
        //         leftSum = leftSum + nums[i];
        //     }
        //     cout<<"leftSum"<<leftSum<<endl;
        //     for(int j=part+1; j<nums.size(); j++){
        //         rightSum = rightSum + nums[j];
        //     }
        //     cout<<"rightSum"<<rightSum<<endl;
        //     if(leftSum == rightSum){
        //         return part;
        //     }
        // }
        // return -1;
    }
};