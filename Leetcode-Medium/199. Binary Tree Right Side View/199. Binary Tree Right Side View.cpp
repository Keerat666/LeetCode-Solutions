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
    void rightview(TreeNode* root,vector<int> &temp,int &maxlevel,int level)
    {
        if(root==nullptr)
        {
            return;
        }
        if(maxlevel<level)
        {
            temp.push_back(root->val);
            maxlevel=level;
        }
        rightview(root->right,temp,maxlevel,level+1);
         rightview(root->left,temp,maxlevel,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> temp;
        int maxlevel=-1;
        rightview(root,temp,maxlevel,0);
        return temp;
    }
};