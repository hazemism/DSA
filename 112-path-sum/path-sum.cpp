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

    
 
    bool hasPathSum(TreeNode* root, int targetSum) {
         if (root==nullptr){return false;}
         if (root->right==NULL&&root->left==NULL){return root->val==targetSum;}
         int rem = targetSum - root->val;
         return hasPathSum(root->right, rem)||hasPathSum(root->left, rem);
    }
};