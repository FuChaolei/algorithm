// @algorithm @lc id=100278 lang=cpp
// @title xuan-zhuan-shu-zu-de-zui-xiao-shu-zi-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
{
public:
    int minArray(vector<int> &numbers)
    {
        int l = 0, r = numbers.size() - 1;
        while (l < r)
        {
            int mid = l + (r - l) / 2;
            if (numbers[r] > numbers[mid])
                r = mid;
            else if (numbers[r] < numbers[mid])
                l = mid + 1;
            else
                r--;
        }
        return numbers[l];
    }
};