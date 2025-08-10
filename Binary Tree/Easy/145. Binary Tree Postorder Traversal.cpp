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
    void postOrder(TreeNode* root, vector<int> & v1){
        if(root==nullptr){
            return;
        }
        postOrder(root->left, v1);
        postOrder(root->right, v1);
        v1.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v1;
        postOrder(root, v1);
        return v1;
    }
};