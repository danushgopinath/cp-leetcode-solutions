class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int leftMax = height[left];
        int rightMax = height[right];
        vector<int> water;

        while(left<right){
            if(leftMax<rightMax){
                int wLeft = height[left]*(right-left);
                left++;
                leftMax = max(leftMax, height[left]);
                water.push_back(wLeft);
            }else{
                int wRight = height[right]*(right-left);
                right--;
                rightMax = max(rightMax, height[right]);
                water.push_back(wRight);
            }
        }
        int cap = *max_element(water.begin(), water.end());
        return cap;
    }
};