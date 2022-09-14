// @algorithm @lc id=100310 lang=cpp
// @title shu-zu-zhong-chu-xian-ci-shu-chao-guo-yi-ban-de-shu-zi-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
    // @test([3,3,4])=3
public:
    int majorityElement(vector<int> &nums)
    {
        int v = 0;
        int n = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (v == 0)
            {
                n = nums[i];
            }
            v += nums[i] == n ? 1 : -1;
        }
        return n;
    }
};