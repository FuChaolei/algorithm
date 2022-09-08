# @algorithm @lc id=100276 lang=python3
# @title er-wei-shu-zu-zhong-de-cha-zhao-lcof


from re import T


class Solution:
    def findNumberIn2DArray(self, matrix: List[List[int]], target: int) -> bool:
        i, j = len(matrix)-1, 0
        while i >= 0 and j < len(matrix[0]):
            if matrix[i][j] > target:
                i = i-1
            elif matrix[i][j] < target:
                j = j+1
            else:
                return True
        return False
