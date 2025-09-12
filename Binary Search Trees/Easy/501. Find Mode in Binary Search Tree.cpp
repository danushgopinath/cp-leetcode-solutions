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
    void inorder(TreeNode* root, vector<int>& arr) {
        if(root==nullptr) return;
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    vector<int> findMode(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);
        unordered_map<int, int> m1;
        for(int i=0; i<arr.size(); i++) {
            m1[arr[i]]++;
        }
        int max = -1;
        for(auto x:m1){
            if(max < x.second) {
                max = x.second;
            }
        }
        vector<int> result;
        for(auto y:m1){
            if(max == y.second) {
                result.push_back(y.first);
            }
        }
        return result;
    }
};