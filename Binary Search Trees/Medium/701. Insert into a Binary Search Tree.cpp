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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr) return new TreeNode(val);
        TreeNode* newRoot = root;
        TreeNode* temp = root;
        while(root!=nullptr){
            temp = root;
            if(val > root->val){
                root = root->right;
            }else{
                root = root->left;
            }
        }
        if(val>temp->val){
            temp->right = new TreeNode(val);
        }else{
            temp->left = new TreeNode(val);
        }
        return newRoot;
    }
};