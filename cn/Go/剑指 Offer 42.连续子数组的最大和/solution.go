// @algorithm @lc id=100304 lang=golang
// @title lian-xu-zi-shu-zu-de-zui-da-he-lcof

//#include <bits/stdc++.h>
package main

func maxSubArray(nums []int) int {
	n := len(nums)
	var dp []int = make([]int, n)
	dp[0] = nums[0]
	res := nums[0]
	for i := 1; i < n; i++ {
		dp[i] = max(dp[i-1]+nums[i], nums[i])
		res = max(dp[i], res)
	}
	return res
}

// func maxSubArray(nums []int) int {
// 	res := nums[0]
// 	tmp :=0
// 	for i:=0;i<len(nums);i++ {
// 		tmp = tmp + nums[i]
// 		res = max(res,tmp)
// 		tmp = max(0,tmp)
// 	}
// 	return res
// }
func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}
