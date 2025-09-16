/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildBinary(vector<int> arr, int s, int e) {
        if(s>e) return nullptr;
        int max = s;
        for(int i=s; i<=e; i++) {
            if(arr[i] > arr[max]){
                max = i;
            }
        }
        TreeNode* temp = new TreeNode(arr[max]);
        temp->left = buildBinary(arr, s, max-1);
        temp->right = buildBinary(arr, max+1, e);
        return temp;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildBinary(nums, 0, nums.size()-1);
    }
};