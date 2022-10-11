class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int>v;
        int s=matrix.size();
        for(int i=matrix.size()-1;i>=0;i--){
            for(int j=0;j<matrix[i].size();j++){
                v.push_back(matrix[i][j]);
            }
        }
        int k=0;
        for(int j=0;j<matrix.size();j++){
            for(int i=0;i<matrix[j].size();i++){
                matrix[i][j]=v[k];
                k++;
            }
        }
    }
};
