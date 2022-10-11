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
    vector<int> m ;
    void inorder(TreeNode* root, vector<int> &m){
        if(!root)
            return ;
        inorder(root->left, m);
        m.push_back(root->val);
        inorder(root->right, m);
        
    }
    bool findTarget(TreeNode* root, int k) {
        inorder(root, m);
        int i=0, j=m.size()-1;
        while(i<j){
            int sum = m[i]+m[j];
            if(sum==k)
                return true;
            else if(sum<k)
                i++;
            else
                j--;
        }
        return false;
    }
};