# @algorithm @lc id=100278 lang=python3
# @title xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof


from cn.Python3.mod.preImport import *
class Solution:
    def minArray(self, numbers: List[int]) -> int:
        l,r = 0,len(numbers)-1
        while l<r:
            mid = l +(r-l)//2
            if numbers[r]>numbers[mid]:
                r=mid
            elif numbers[r]<numbers[mid]:
                l = mid+1
            else:
                r = r-1
        return numbers[l]