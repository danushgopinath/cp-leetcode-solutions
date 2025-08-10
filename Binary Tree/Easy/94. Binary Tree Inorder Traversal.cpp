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
    void preOrder(TreeNode* root, vector<int> & v1){
        if(root==nullptr){
            return;
        }
        preOrder(root->left, v1);
        v1.push_back(root->val);
        preOrder(root->right, v1);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v1;
        preOrder(root, v1);
        return v1;
    }
};