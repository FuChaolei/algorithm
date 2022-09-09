# @algorithm @lc id=100293 lang=python3 
# @title shun-shi-zhen-da-yin-ju-zhen-lcof

#include <bits/stdc++.h>
from cn.Python3.mod.preImport import *
class Solution:g
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        l,r,t,b = 0,len(matrix[0])-1,0,len(matrix)-1
        while True:
            for i in range(l,r+1):
                res.append(matrix[t][i])
            t+=1
            if t>b:
                break
            for i in range(t,b+1):
                res.append(matrix[r][i])
            r -= 1
            if r<l:
                break
    for i in range(       di(ix[0]),0,len(matrixwhile True: