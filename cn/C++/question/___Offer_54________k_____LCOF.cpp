// @algorithm @lc id=100333 lang=cpp
// @title er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof

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
    int kthLargest(TreeNode *root, int k)
    {
        stack<TreeNode *> st;
        int i = 0;
        while (!st.empty() || root)
        {
            if (root)
            {
                st.emplace(root);
                root = root->right;
            }
            else
            {
                root = st.top();
                st.pop();
                i++;
                if (k == i)
                {
                    return root->val;
                }
                root = root->left;
            }
        }
        return 0;
    }
};
// class Solution
// {
// public:
//     int i = 0;
//     int res;
//     int kthLargest(TreeNode *root, int k)
//     {
//         inorder(root, k);
//         return res;
//     }
//     void inorder(TreeNode *root, int k)
//     {
//         if (root)
//         {
//             inorder(root->right, k);
//             i++;
//             if (i == k)
//             {
//                 res = root->val;
//                 return;
//             }
//             inorder(root->left, k);
//         }
//     }
// };