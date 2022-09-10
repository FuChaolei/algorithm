// @algorithm @lc id=100326 lang=cpp
// @title liang-ge-lian-biao-de-di-yi-ge-gong-gong-jie-dian-lcof

#include <iostream>
#include <vector>
#include <string>
#include "algm/algm.h"
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
// @test(8,[4,1,8,4,5],[5,0,1,8,4,5],2,3)=Intersected at '8'
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode *a = headA, *b = headB;
        while (a != b)
        {
            a = a != nullptr ? a->next : headB;
            b = b != nullptr ? b->next : headA;
        }
        return a;
    }
};