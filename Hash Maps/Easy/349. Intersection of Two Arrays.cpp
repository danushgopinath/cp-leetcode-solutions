class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> intArr;
        for(int i=0; i<nums1.size(); i++){
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            if(it!=nums2.end()){
                intArr.insert(nums1[i]);
            }
        }
        vector<int> x(intArr.begin(), intArr.end());
        return x;
    }
};