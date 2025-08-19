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
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int> v1;
        inOrder(root, v1);
        int sum = low+high;
        for(int i=0; i<v1.size(); i++){
            if(v1[i]>low && v1[i]<high){
                sum += v1[i];
            }
        }
        return sum;
    }
};