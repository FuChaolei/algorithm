# @algorithm @lc id=100304 lang=python3
# @title lian-xu-zi-shu-zu-de-zui-da-he-lcof

# include <bits/stdc++.h>
# class Solution:
#     def maxSubArray(self, nums: List[int]) -> int:
#         res = nums[0]
#         tmp = 0
#         for i in range(0,len(nums)):
#             tmp += nums[i]
#             res = max(tmp,res)
#             tmp = max(tmp,0)
#         return res
class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        dp = [0]*len(nums)
        dp[0] = nums[0]
        res = nums[0]
        for i in range(1, len(nums)):
            dp[i] = max(dp[i-1]+nums[i], nums[i])
            res = max(dp[i], res)
        return res
