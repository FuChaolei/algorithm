// @algorithm @lc id=100333 lang=golang
// @title er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof

package main

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
// func kthLargest(root *TreeNode, k int) int {
// 	res :=0
// 	i := 0
// 	inorder(root,k,&i,&res)
// 	return res
// }
// func inorder(root *TreeNode, k int, i *int,res *int){
// 	if root == nil {
// 		return
// 	}
// 	inorder(root.Right,k,i,res)
// 	*i = *i+1
// 	if *i==k {
// 		*res = root.Val
// 		return
// 	}
// 	inorder(root.Left,k,i,res)

// }
func kthLargest(root *TreeNode, k int) int {
	var st []*TreeNode
	i := 0
	for len(st) > 0 || root != nil {
		if root != nil {
			st = append(st, root)
			root = root.Right
		} else {
			root = st[len(st)-1]
			st = st[:len(st)-1]
			i = i + 1
			if i == k {
				return root.Val
			}
			root = root.Left
		}
	}
	return 0
}
