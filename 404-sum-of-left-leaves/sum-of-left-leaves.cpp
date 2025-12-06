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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root==NULL){return 0;}
        if (root->left==NULL&&root->right==NULL){return 0;}
        TreeNode* temp =root->left;
        int sum=0;
        if (temp!=NULL&&temp->left==NULL&&temp->right==NULL){sum=temp->val;} 
        
        return sum+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};