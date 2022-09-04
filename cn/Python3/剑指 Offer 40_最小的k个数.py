# @algorithm @lc id=100301 lang=python3 
# @title zui-xiao-de-kge-shu-lcof

class Solution:
    def getLeastNumbers(self, arr: List[int], k: int) -> List[int]:
        if k==0:
            return list()
        
        
# class Solution:
#     def getLeastNumbers(self, arr: List[int], k: int) -> List[int]:
#         arr.sort()
#         return arr[:k]