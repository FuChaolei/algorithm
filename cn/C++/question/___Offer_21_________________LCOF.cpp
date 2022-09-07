// @algorithm @lc id=100291 lang=cpp
// @title diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof

#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    vector<int> exchange(vector<int> &nums)
    {
        int l = 0, r = nums.size() - 1;
        while (l < r)
        {
            while (l < r && nums[r] % 2 == 0)
            {
                r--;
            }
            while (l < r && nums[l] % 2 == 1)
            {
                l++;
            }
            swap(nums[l], nums[r]);
        }
        return nums;
    }
};