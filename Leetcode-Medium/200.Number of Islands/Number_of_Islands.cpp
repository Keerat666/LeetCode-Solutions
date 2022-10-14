
//Problem Link :https://leetcode.com/problems/number-of-islands/

class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>& grid,vector<vector<bool>> &vis,int n,int m){
        vis[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        while(!q.empty()){
            pair<int,int> p=q.front();q.pop();
            int r=p.first,c=p.second;
            if(r>0){
                if(grid[r-1][c]=='1' && vis[r-1][c]==false){vis[r-1][c]=true;q.push({r-1,c});}
            }
            if(r<n-1){
                if(grid[r+1][c]=='1' && vis[r+1][c]==false){vis[r+1][c]=true;q.push({r+1,c});}
            }
            if(c<m-1){
                if(grid[r][c+1]=='1' && vis[r][c+1]==false){vis[r][c+1]=true;q.push({r,c+1});}
            }
             if(c>0){
                if(grid[r][c-1]=='1' && vis[r][c-1]==false){vis[r][c-1]=true;q.push({r,c-1});}
            }
            
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();int m=grid[0].size();
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==false){
                    ans++;bfs(i,j,grid,vis,n,m);
                }
            }
        }
        return ans;
    }
};