/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
            if (original==NULL){return NULL;}
            if (original->val==target->val){return cloned;}
            TreeNode* temp1=getTargetCopy(original->right,cloned->right,target);
            TreeNode* temp2=getTargetCopy(original->left,cloned->left,target);
            return (temp1==NULL)?temp2:temp1;
        
    }
};