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
    void inOrder(TreeNode* root, vector<int>& v1){
        if(root==nullptr){
            return;
        }
        inOrder(root->left, v1);
        v1.push_back(root->val);
        inOrder(root->right, v1);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> v1;
        inOrder(root1, v1);
        inOrder(root2, v1);
        sort(v1.begin(), v1.end());
        return v1;
    }
};