// @algorithm @lc id=100274 lang=cpp
// @title fei-bo-na-qi-shu-lie-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    int fib(int n)
    {
        if (n < 2)
            return n;
        int s = 0, f = 1;
        for (int i = 2; i <= n; i++)
        {
            int tmp = s + f;
            s = f;
            f = tmp % 1000000007;
        }
        return f;
    }
};