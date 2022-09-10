// @algorithm @lc id=100293 lang=golang
// @title shun-shi-zhen-da-yin-ju-zhen-lcof

package main

func spiralOrder(matrix [][]int) []int {
	if len(matrix) == 0 {
		return nil
	}
	res := []int{}
	if len(matrix) == 0 {
		return res
	}
	l, r, t, b := 0, len(matrix[0])-1, 0, len(matrix)-1
	for true {
		for i := l; i < r+1; i++ {
			res = append(res, matrix[t][i])
		}
		t += 1
		if t > b {
			break
		}
		for i := t; i < b+1; i++ {
			res = append(res, matrix[i][r])
		}
		r -= 1
		if l > r {
			break
		}
		for i := r; i > l-1; i-- {
			res = append(res, matrix[b][i])
		}
		b -= 1
		if t > b {
			break
		}
		for i := b; i > t-1; i-- {
			res = append(res, matrix[i][l])
		}
		l += 1
		if l > r {
			break
		}
	}
	return res
}
