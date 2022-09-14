// @algorithm @lc id=100341 lang=golang
// @title bu-ke-pai-zhong-de-shun-zi-lcof

package main

func isStraight(nums []int) bool {
	ma, mi := 0, 14
	mp := make(map[int]int)
	for i := 0; i < len(nums); i++ {
		if nums[i] == 0 {
			continue
		}
		if mp[nums[i]] != 0 {
			return false
		}
		mp[nums[i]]++
		mi = min(mi, nums[i])
		ma = max(ma, nums[i])
	}
	return ma-mi < 5
}
func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}
func min(a int, b int) int {
	if a < b {
		return a
	}
	return b
}
