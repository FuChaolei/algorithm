# @algorithm @lc id=100329 lang=python3
# @title zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof




class Solution:
    def search(self, nums: List[int], target: int) -> int:
        def helper(nums, target):
            l, r = 0, len(nums)-1
            while l <= r:
                mid = l + (r-l)//2
                if nums[mid] <= target:
                    l = mid+1
                else:
                    r = mid-1
            return l
        return helper(nums, target)-helper(nums, target-1)
