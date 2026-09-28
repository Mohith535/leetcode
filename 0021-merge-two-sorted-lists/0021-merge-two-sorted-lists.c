/*==========================================================================
 *  LeetCode 21 — Merge Two Sorted Lists
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Linked List, Recursion
 *  Link         : https://leetcode.com/problems/merge-two-sorted-lists/
 *
 *  Approach     : Splice the existing nodes together - allocate nothing.
 *  Time         : O(m + n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stddef.h>

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode dummy = {0, NULL};
    struct ListNode *temp = &dummy;

    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            temp->next = list1;
            list1 = list1->next;
        } else {
            temp->next = list2;
            list2 = list2->next;
        }

        temp = temp->next;
    }

    if (list1 != NULL)
        temp->next = list1;
    else
        temp->next = list2;

    return dummy.next;
}
