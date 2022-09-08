// @algorithm @lc id=100288 lang=cpp
// @title er-cha-shu-de-jing-xiang-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    TreeNode *mirrorTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return nullptr;
        }
        TreeNode *left = mirrorTree(root->left);
        TreeNode *right = mirrorTree(root->right);
        root->left = right;
        root->right = left;
        return root;
    }
};