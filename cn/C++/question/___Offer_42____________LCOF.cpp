// @algorithm @lc id=100304 lang=cpp
// @title lian-xu-zi-shu-zu-de-zui-da-he-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int res = nums[0];
        vector<int> dp(nums.size(), 0);
        dp[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            res = max(res, dp[i]);
        }
        return res;
    }
};
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int res = INT32_MIN;
//         int tmp = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             tmp += nums[i];
//             res = max(tmp, res);
//             tmp = max(0, tmp);
//         }
//         return res;
//     }
// };