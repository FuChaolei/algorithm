# @algorithm @lc id=100293 lang=python3
# @title shun-shi-zhen-da-yin-ju-zhen-lcof

# include <bits/stdc++.h>
from cn.Python3.mod.preImport import *


class Solution:
# @test([[1,11],[2,12],[3,13],[4,14],[5,15],[6,16],[7,17],[8,18],[9,19],[10,20]])=[1,11,12,13,14,15,16,17,18,19,20,10,9,8,7,6,5,4,3,2]
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        if not matrix:
            return []
        l, r, t, b = 0, len(matrix[0])-1, 0, len(matrix)-1
        res = []
        while True:
            for i in range(l, r+1):
                res.append(matrix[t][i])
            t += 1
            if t > b:
                break
            for i in range(t, b+1):
                res.append(matrix[i][r])
            r -= 1
            if r < l:
                break
            for i in range(r, l-1, -1):
                res.append(matrix[b][i])
            b -= 1
            if t > b:
                break
            for i in range(b, t-1, -1):
                res.append(matrix[i][l])
            l += 1
            if r < l:
                break
        return res
