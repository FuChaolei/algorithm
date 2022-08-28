// @algorithm @lc id=100277 lang=cpp
// @title qing-wa-tiao-tai-jie-wen-ti-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
// @test(0)=1
// @test(0)=1
// @test(44)=134903163
// @test(44)=134903163
// @test(0)=1
// @test(44)=134903163
{
public:
    int numWays(int n)
    {
        if (n == 0)
            return 1;
        if (n < 3)
            return n;
        int s = 1, f = 2;
        for (int i = 3; i <= n; i++)
        {
            int tmp = s + f;
            s = f;
            f = tmp % 1000000007;
        }
        return f;
    }
};