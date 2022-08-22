// @algorithm @lc id=100294 lang=golang
// @title lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof


package main
/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
func getKthFromEnd(head *ListNode, k int) *ListNode {
	s,f := head,head
	for k>0 {
		k--
		f = f.Next
	}
	for f!=nil {
		f = f.Next
		s = s.Next
	}
	return s
}