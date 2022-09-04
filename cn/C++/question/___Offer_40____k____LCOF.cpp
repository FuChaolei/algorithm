// @algorithm @lc id=100301 lang=cpp
// @title zui-xiao-de-kge-shu-lcof

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution
{
public:
    vector<int> getLeastNumbers(vector<int> &arr, int k)
    {
        if(k>=arr.size()){
            return arr;
        }
        // srand(time(NULL));
        return quicks(arr, 0, arr.size() - 1, k);
    }
    vector<int> quicks(vector<int> arr, int l, int r, int k)
    {
        // int m = rand() % (r - l + 1) + l;
        // swap(arr[m], arr[l]);
        int i = l, j = r;
        while (i < j)
        {
            while (i < j && arr[j] >= arr[l])
            {
                j--;
            }
            while (i < j && arr[i] <= arr[l])
            {
                i++;
            }
            swap(arr[i], arr[j]);
        }
        swap(arr[i], arr[l]);
        if (k < i)
            return quicks(arr, l, i - 1, k);
        if (k > i)
            return quicks(arr, i + 1, r, k);
        vector<int> res;
        res.assign(arr.begin(), arr.begin() + k);
        return res;
    }
};
// class Solution {
// // @test([3,2,1],2)=[1,2]
// public:
//     vector<int> getLeastNumbers(vector<int>& arr, int k) {
//         vector<int> res;
//         if(k==0){
//             return res;
//         }
//         priority_queue<int> Q;
//         for (int i = 0; i < k;i++){
//             Q.emplace(arr[i]);
//         }
//         for (int i = k; i < arr.size();i++){
//             if(arr[i]<Q.top()){
//                 Q.pop();
//                 Q.emplace(arr[i]);
//             }
//         }
//         for (int i = 0; i < k;i++){
//             int tmp = Q.top();
//             res.emplace_back(tmp);
//             Q.pop();
//         }
//         return res;
//     }
// };
// class Solution
// {
// public:
//     vector<int> getLeastNumbers(vector<int> &arr, int k)
//     {
//         sort(arr.begin(), arr.end());
//         vector<int> res;
//         for (int i = 0; i < k; i++)
//         {
//             res.emplace_back(arr[i]);
//         }
//         return res;
//     }
// };