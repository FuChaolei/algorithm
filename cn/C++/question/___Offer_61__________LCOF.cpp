// @algorithm @lc id=100341 lang=cpp
// @title bu-ke-pai-zhong-de-shun-zi-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
// @test([0,0,1,2,5])=true
// @test([1,2,3,4,5])=true
{
public:
    bool isStraight(vector<int> &nums)
    {
        int ma=0, mi=14;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                continue;
            }
            if (mp[nums[i]] != 0)
            {
                return false;
            }
            ma = max(ma, nums[i]);
            mi = min(mi, nums[i]);
            mp[nums[i]]++;
        }
        return ma - mi < 5;
    }
};