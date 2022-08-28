# @algorithm @lc id=100333 lang=python3
# @title er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof
# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, x):
#         self.val = x
#         self.left = None
#         self.right = None

class Solution:
    def kthLargest(self, root: TreeNode, k: int) -> int:
        st = []
        i = 0
        while len(st)>0 or root!=None:
            if root!=None:
                st.append(root)
                root = root.right
            else:
                root = st[-1]
                st = st[:-1]
                i = i+1
                if i == k:
                    return root.val
                root = root.left
        return 0
# class Solution:
#     def kthLargest(self, root: TreeNode, k: int) -> int:
#         res = 0
#         i = 0

#         def inorder(root):
#             nonlocal i
#             nonlocal res
#             if(root):
#                 inorder(root.right)
#                 i = i + 1
#                 if(k == i):
#                     res = root.val
#                     return
#                 inorder(root.left)
#         inorder(root)
#         return res
