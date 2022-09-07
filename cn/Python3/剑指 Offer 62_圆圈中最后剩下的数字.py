# @algorithm @lc id=100343 lang=python3
# @title yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof

# include <bits/stdc++.h>
class Solution:
    def lastRemaining(self, n: int, m: int) -> int:
        def f(n, m):
            if n == 1:
                return 0
            x = f(n-1, m)
            return (m % n+x) % n
        return f(n, m)
