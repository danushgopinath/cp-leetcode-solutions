class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int, int> m1;
        for(int i=0; i<nums.size(); i++){
            m1[nums[i]]++;
        }
        
        vector<int> v1;
         for (auto& pair : m1) {
            int value = pair.first;
            int count = pair.second;
            v1.insert(v1.end(), count, value);
        }
        nums = v1;
    }
};

// BETTER SOLUTION
// class Solution {
// public:
//     void sortColors(vector<int>& a) {
//         int l = 0, m = 0, h = a.size() - 1;
//         while (m <= h) {
//             if (a[m] == 0) swap(a[l++], a[m++]);
//             else if (a[m] == 2) swap(a[m], a[h--]);
//             else m++;
//         }
//     }
// };