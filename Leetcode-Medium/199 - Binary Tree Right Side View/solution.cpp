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

//Time Complexity - O(N)
//Space Complexity - O(N)
// N = Number of nodes in the binary tree
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(!root) return {};
        vector<int> ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int n = q.size();
            while(n--) {
                TreeNode* frontEle = q.front();
                if(n == 0) ans.push_back(frontEle->val);
                q.pop();
                if(frontEle->left) q.push(frontEle->left);
                if(frontEle->right) q.push(frontEle->right);
            }
        }
        return ans;
    }
};