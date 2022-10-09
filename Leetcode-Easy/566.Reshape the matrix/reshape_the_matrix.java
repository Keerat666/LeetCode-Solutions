//Problem Link:https://leetcode.com/problems/reshape-the-matrix/
class Solution {
    public int[][] matrixReshape(int[][] mat, int r, int c) {
        int [][]arr =new int[r][c];
        ArrayList<Integer> a = new ArrayList<>();
        int rows=mat.length,col=mat[0].length;
        if(r*c>rows*col || r*c<rows*col)
        {
            return mat;
        }
        else
        {
            int k=0;
            for(int i=0;i<rows;i++)
            {
                for(int j=0;j<col;j++)
                {
                   a.add(mat[i][j]); 
                }
            }
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    arr[i][j]=a.get(k);
                    k++;
                }
            }
            
            
        }
        return  arr;
        
    }
}