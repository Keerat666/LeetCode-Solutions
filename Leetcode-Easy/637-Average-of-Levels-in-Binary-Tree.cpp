class Solution {
    
    void solve(TreeNode* root,vector<double> &ans){
        
        queue<TreeNode*> q;
        q.push(root);
        
        
        while(q.size()){
            
            double sum =0;
            int size= q.size();
            Crea
            for(int i=0;i<size;i++){
                
            auto node = q.front();
            q.pop();
            
            sum+=node->val;
            if(node->left) q.push(node->left);
            if(node->right)q.push(node->right);
                
            }
            double avg = ((sum/(double)size)*100000)/100000;
            ans.push_back(avg);
            
        }
        
        return ;
    }
    
public:
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> ans;
        solve(root,ans);
        return ans;
    }
};
