def path(matrix, i, j, l, di):
    if j in di[i]: return di[i][j]
    a = l
    b = l
    c = l
    d = l
    if i<len(matrix)-1:
        if matrix[i+1][j]>matrix[i][j]:
            a = path(matrix, i+1, j, l, di)
    if j<len(matrix[0])-1:
        if matrix[i][j+1]>matrix[i][j]:
            b = path(matrix, i, j+1, l, di)
    if i>0:
        if matrix[i-1][j]>matrix[i][j]:
            c = path(matrix, i-1, j, l, di)
    if j>0:
        if matrix[i][j-1]>matrix[i][j]:
            d = path(matrix, i, j-1, l, di)
    di[i][j] = max(a,b,c,d)+1
    return di[i][j]
        
class Solution:
    def longestIncreasingPath(self, matrix: List[List[int]]) -> int:
        ml = 0
        d = {}
        for i in range(len(matrix)):
            d[i]={}
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                l = path(matrix, i, j, 0, d)
                if l>ml: ml = l
        return ml