class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        temp1 = []
        j=0
        while j<len(matrix[0]):
            for l in range(len(matrix)-1,-1,-1):
                item = matrix[l]
                temp1.append(item[j])
            j+=1
        k=0
        leng = len(matrix[0])
        for i in range(len(matrix)):
            matrix[i] = temp1[k:k+leng]
            k+=leng
