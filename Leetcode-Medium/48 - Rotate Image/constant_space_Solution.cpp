class Solution {
public:
    void reverse(vector<int>&matrix,int l,int r)
    {
        while(l<r)
        {
            swap(matrix[l],matrix[r]);
            l++;
            r--;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                    break;
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i=0;i<n;i++)
            reverse(matrix[i],0,n-1);
            
    }
};