# @algorithm @lc id=100301 lang=python3
# @title zui-xiao-de-kge-shu-lcof


class Solution:
    def getLeastNumbers(self, arr: List[int], k: int) -> List[int]:
        if len(arr) == k:
            return arr

        def quicks(arr, l, r, k):
            i, j = l, r
            while i < j:
                while i < j and arr[j] >= arr[l]:
                    j = j-1
                while i < j and arr[i] <= arr[l]:
                    i = i + 1
                arr[i], arr[j] = arr[j], arr[i]
            arr[i], arr[l] = arr[l], arr[i]
            if k < i:
                return quicks(arr, l, i-1, k)
            if k > i:
                return quicks(arr, i+1, r, k)
            return arr[:k]
        return quicks(arr, 0, len(arr)-1, k)
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
