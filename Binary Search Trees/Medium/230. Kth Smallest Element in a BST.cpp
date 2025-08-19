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
    void inOrder(TreeNode* root, vector<int>& treeNodes){
        if(root==nullptr){
            return;
        }
        inOrder(root->left, treeNodes);
        treeNodes.push_back(root->val);
        inOrder(root->right, treeNodes);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> treeNodes;
        inOrder(root, treeNodes);
        return treeNodes[k-1];
    }
};