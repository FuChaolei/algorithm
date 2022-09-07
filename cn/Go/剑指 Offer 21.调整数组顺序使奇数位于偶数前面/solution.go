// @algorithm @lc id=100291 lang=golang
// @title diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof

package main

func exchange(nums []int) []int {
	l := 0
	r := len(nums) - 1
	for l < r {
		for l < r && nums[r]%2 == 0 {
			r--
		}
		for l < r && nums[l]%2 == 1 {
			l++
		}
		nums[l], nums[r] = nums[r], nums[l]
	}
	return nums
}
