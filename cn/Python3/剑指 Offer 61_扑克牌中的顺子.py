# @algorithm @lc id=100341 lang=python3
# @title bu-ke-pai-zhong-de-shun-zi-lcof


from cn.Python3.mod.preImport import *


class Solution:
    # @test([4,7,5,9,2])=false
    def isStraight(self, nums: List[int]) -> bool:
        ma, mi = 0, 14
        st = set()
        for i in nums:
            if i == 0:
                continue
            if i in st:
                return False
            st.add(i)
            ma = max(ma, i)
            mi = min(mi, i)
        return ma-mi < 5
