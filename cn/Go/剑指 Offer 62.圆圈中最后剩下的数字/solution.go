// @algorithm @lc id=100343 lang=golang
// @title yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof

package main

func lastRemaining(n int, m int) int {
	var f func(int, int) int
	f = func(n int, m int) int {
		if n == 1 {
			return 0
		}
		x := f(n-1, m)
		return (m%n + x) % n
	}
	return f(n, m)
}
