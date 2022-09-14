// @algorithm @lc id=100329 lang=golang
// @title zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof

package main

func search(nums []int, target int) int {
	helper := func(nums []int, target int) int {
		l, r := 0, len(nums)-1
		for l <= r {
			mid := l + (r-l)/2
			if nums[mid] <= target {
				l = mid + 1
			} else {
				r = mid - 1
			}
		}
		return l
	}
	return helper(nums, target) - helper(nums, target-1)
}
