# @algorithm @lc id=100310 lang=python3
# @title shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof


from cn.Python3.mod.preImport import *
class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        v,n = 0,0
        for i in nums:
            if v==0:
                n=i
            v+=1 if n==i else -1
        return n