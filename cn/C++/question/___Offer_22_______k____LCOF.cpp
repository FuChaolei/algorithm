// @algorithm @lc id=100294 lang=cpp
// @title lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof


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
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode *s = head;
        ListNode *f = head;
        while (k--)
        {
            f = f->next;
        }
        while(f){
            f = f->next;
            s = s->next;
        }
        return s;
    }
};