# @algorithm @lc id=100301 lang=python3
# @title zui-xiao-de-kge-shu-lcof


class Solution:
    def quick(self,l,r)
    def getLeastNumbers(self, arr: List[int], k: int) -> List[int]:

# class Solution:
#     def getLeastNumbers(self, arr: List[int], k: int) -> List[int]:
#         if k==0:
#             return list()
#         hp = [-x for x in arr[:k]]
#         heapq.heapify(hp)
#         for i in range(k,len(arr)):
#             if arr[i]<-hp[0]:
#                 #print(-arr[i])
#                 heapq.heappop(hp)
#                 heapq.heappush(hp,-arr[i])
#         hp = [-x for x in hp]
#         return hp
# class Solution:
#     def getLeastNumbers(self, arr: List[int], k: int) -> List[int]:
#         arr.sort()
#         return arr[:k]