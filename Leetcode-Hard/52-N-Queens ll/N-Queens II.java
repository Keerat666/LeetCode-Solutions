// solution to N-Queens II
class Solution {
    int res = 0;
    public int totalNQueens(int n) {
        int[] col = new int[n];
        int[] rowPcol = new int[2 * n];
        int[] rowMcol = new int[2 * n];
        sH(0, col, rowPcol, rowMcol, n);
        return res;
    }

    public void sH(int index, int[] col, int[] rowPcol, int[] rowMcol, int n) {
        int row = index;
        if (row >= n) {
            res++;
            return;
        }
        for (int i = 0; i < n; i++) {
            if (col[i] > 0 || rowPcol[i + row] > 0 || rowMcol[row - i + n] > 0) continue;
            col[i] = 1;
            rowPcol[i + row] = 1;
            rowMcol[row - i + n] = 1;
            sH(index + 1, col, rowPcol, rowMcol, n);
            col[i] = 0;
            rowPcol[i + row] = 0;
            rowMcol[row - i + n] = 0;
        }
    }
}
