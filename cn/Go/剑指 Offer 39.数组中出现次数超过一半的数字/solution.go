// @algorithm @lc id=100310 lang=golang
// @title shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof


package main
func majorityElement(nums []int) int {
// @test([1,2,3,2,2,2,5,4,2])=2
	v,n:=0,0
	for _,i := range nums {
		if v==0 {
			n = i
		}
		if i==n {
			v+=1
		} else {
			v-=1
		}
	}
	return n
}