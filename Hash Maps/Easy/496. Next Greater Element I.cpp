class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nextGreat;
        int nextEle = -1;

        for(int i=0; i<nums1.size(); i++){
            for(int j=0; j<nums2.size(); j++){
                if(nums1[i]==nums2[j]){
                    for(int k=j; k<nums2.size(); k++){
                        if(nums2[k]>nums2[j]){
                            nextEle = nums2[k];
                            break;
                        }else{
                            nextEle = -1;
                        }
                    }
                    nextGreat.push_back(nextEle);
                    break;
                }
            }
        }
        return nextGreat;
    }
};