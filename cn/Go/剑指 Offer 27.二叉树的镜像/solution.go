// @algorithm @lc id=100288 lang=golang
// @title er-cha-shu-de-jing-xiang-lcof

package main

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func mirrorTree(root *TreeNode) *TreeNode {
	if root == nil {
		return nil
	}
	l := mirrorTree(root.Left)
	r := mirrorTree(root.Right)
	root.Left = r
	root.Right = l
	return root
}
