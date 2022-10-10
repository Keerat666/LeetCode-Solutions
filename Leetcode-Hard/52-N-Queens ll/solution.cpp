// link : https://leetcode.com/problems/n-queens-ii/


class Solution {
    unordered_map<int,int> col,diag1,diag2;
    int NQueens(int i,int n){
        if(i==n) return 1;
        int cnt=0;
        for(int x=0;x<n;x++){
            if(col[x]!=0) continue;
            if(diag1[x+i]!=0) continue;
            if(diag2[x-i]!=0) continue;
            col[x]++;
            diag1[x+i]++;
            diag2[x-i]++;
            cnt+=NQueens(i+1,n);
            col[x]--;
            diag1[x+i]--;
            diag2[x-i]--;
        }
        return cnt;
    }
public:
    int totalNQueens(int n) {
        return NQueens(0,n);        
    }
};