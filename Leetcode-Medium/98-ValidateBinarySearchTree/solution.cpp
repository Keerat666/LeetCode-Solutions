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
    bool checkBST(TreeNode* root,long long m1,long long m2)
    {
        if(root==NULL)
            return true;
        
        if(root->val>m1 && root->val<m2)
            return checkBST(root->left,m1,root->val) && checkBST(root->right,root->val,m2);
        
        return false;
    }
    
    bool isValidBST(TreeNode* root) {
        
        return checkBST(root,LLONG_MIN,LLONG_MAX);
    }
    
};