// @algorithm @lc id=100276 lang=cpp
// @title er-wei-shu-zu-zhong-de-cha-zhao-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
// @test([[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]],5)=true
{
public:
    bool findNumberIn2DArray(vector<vector<int>> &matrix, int target)
    {
        int i = matrix.size() - 1, j = 0;
        while (i >= 0 && j < matrix[0].size())
        {
            if (matrix[i][j] > target)
                i--;
            else if (matrix[i][j] < target)
                j++;
            else
                return true;
        }
        return false;
    }
};