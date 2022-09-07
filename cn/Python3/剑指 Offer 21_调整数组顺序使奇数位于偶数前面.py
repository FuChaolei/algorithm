# @algorithm @lc id=100291 lang=python3
# @title diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof

# include <bits/stdc++.h>
from cn.Python3.mod.preImport import *


class Solution:
    def exchange(self, nums: List[int]) -> List[int]:
        l = 0
        r = len(nums)-1
        while l < r:
            while l < r and nums[r] % 2 == 0:
                r = r-1
            while l < r and nums[l] % 2 == 1:
                l = l+1
            nums[l], nums[r] = nums[r], nums[l]
        return nums
