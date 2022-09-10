// @algorithm @lc id=100293 lang=cpp
// @title shun-shi-zhen-da-yin-ju-zhen-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
class Solution
// @test([[7],[9],[6]])=[7,9,6]
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> res;
        if (matrix.size() == 0)
        {
            return res;
        }
        int l = 0, r = matrix[0].size() - 1, t = 0, b = matrix.size() - 1;
        while (true)
        {
            for (int i = l; i < r + 1; i++)
            {
                res.emplace_back(matrix[t][i]);
            }
            t += 1;
            if (t > b)
            {
                break;
            }
            for (int i = t; i < b + 1; i++)
            {
                res.emplace_back(matrix[i][r]);
            }
            r -= 1;
            if (r < l)
            {
                break;
            }
            for (int i = r; i > l - 1; i--)
            {
                res.emplace_back(matrix[b][i]);
            }
            b -= 1;
            if (t > b)
            {
                break;
            }
            for (int i = b; i > t - 1; i--)
            {
                res.emplace_back(matrix[i][l]);
            }
            l += 1;
            if (l > r)
            {
                break;
            }
        }
        return res;
    }
};