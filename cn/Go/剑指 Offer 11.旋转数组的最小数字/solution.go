// @algorithm @lc id=100278 lang=golang
// @title xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof

package main

func minArray(numbers []int) int {
	l, r := 0, len(numbers)-1
	for l < r {
		mid := l + (r-l)/2
		if numbers[r] < numbers[mid] {
			l = mid + 1
		} else if numbers[r] > numbers[mid] {
			r = mid
		} else {
			r--
		}
	}
	return numbers[l]
}
