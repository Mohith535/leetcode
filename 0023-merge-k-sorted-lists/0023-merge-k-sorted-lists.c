/*==========================================================================
 *  LeetCode 23 — Merge k Sorted Lists
 *  ------------------------------------------------------------------------
 *  Difficulty   : Hard
 *  Topics       : Linked List, Divide and Conquer, Heap (Priority Queue), Merge Sort, Tournament Sort
 *  Problem      : https://leetcode.com/problems/merge-k-sorted-lists/
 *
 *  Approach     : Bottom-up pairwise merging - merge neighbours, double the stride, repeat.
 *  Time         : O(N log k)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stddef.h>

struct ListNode* merge(struct ListNode* a, struct ListNode* b) {
    struct ListNode dummy = {0, NULL};
    struct ListNode *cur = &dummy;

    while (a && b) {
        if (a->val <= b->val) {
            cur->next = a;
            a = a->next;
        } else {
            cur->next = b;
            b = b->next;
        }
        cur = cur->next;
    }

    cur->next = a ? a : b;

    return dummy.next;
}

struct ListNode* mergeKLists(struct ListNode** lists, int listsSize) {
    if (listsSize == 0)
        return NULL;

    int interval = 1;

    while (interval < listsSize) {
        for (int i = 0; i + interval < listsSize; i += interval * 2) {
            lists[i] = merge(lists[i], lists[i + interval]);
        }

        interval *= 2;
    }

    return lists[0];
}
