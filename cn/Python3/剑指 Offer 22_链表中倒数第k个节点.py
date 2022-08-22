# @algorithm @lc id=100294 lang=python3
# @title lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof


from cn.Python3.mod.preImport import *
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getKthFromEnd(self, head: ListNode, k: int) -> ListNode:
        s,f = head,head
        while k>0 :
            k=k-1
            f = f.next
        while f :
            f = f.next
            s = s.next
        return s