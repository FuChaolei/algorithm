// @algorithm @lc id=100276 lang=golang
// @title er-wei-shu-zu-zhong-de-cha-zhao-lcof

package main

func findNumberIn2DArray(matrix [][]int, target int) bool {
	i, j := len(matrix)-1, 0
	for i >= 0 && j < len(matrix[0]) {
		if matrix[i][j] > target {
			i--
		} else if matrix[i][j] < target {
			j++
		} else {
			return true
		}
	}
	return false
}
