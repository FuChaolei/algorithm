// @algorithm @lc id=100329 lang=cpp
// @title zai-pai-xu-shu-zu-zhong-cha-zhao-shu-zi-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int res = 0;
//         for (int i = 0; i < nums.size(); i++)
//         {
//             if(nums[i]==target)
//                 res++;
//         }
//         return res;
//     }
// };
class Solution
// @test([5,7,7,8,8,10], 8)=2
{
public:
    int helper(vector<int> nums, int target)
    {
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (nums[mid] <= target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return l;
    }
    int search(vector<int> &nums, int target)
    {
        return helper(nums, target) - helper(nums, target - 1);
    }
};