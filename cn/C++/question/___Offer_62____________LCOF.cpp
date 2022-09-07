// @algorithm @lc id=100343 lang=cpp
// @title yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    int f(int n, int m)
    {
        if (n == 1)
        {
            return 0;
        }
        int x = f(n - 1, m);
        return (m % n + x) % n;
    }
    int lastRemaining(int n, int m)
    {
        return f(n, m);
    }
};