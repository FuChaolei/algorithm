# @algorithm @lc id=100326 lang=python3
# @title liang-ge-lian-biao-de-di-yi-ge-gong-gong-jie-dian-lcof


from cn.Python3.mod.preImport import *
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None


class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        a, b = headA, headB
        while a != b:
            a = a.next if a else headB
            b = b.next if b else headA
        return a
