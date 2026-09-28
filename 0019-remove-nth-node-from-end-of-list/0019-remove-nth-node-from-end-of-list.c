/*==========================================================================
 *  LeetCode 19 — Remove Nth Node From End of List
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Linked List, Two Pointers
 *  Problem      : https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 *
 *  Approach     : Two pointers held exactly `n` nodes apart, so one pass finds the target.
 *  Time         : O(L)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    struct ListNode dummy = {0, head};
    struct ListNode *fast = &dummy;
    struct ListNode *slow = &dummy;

    for (int i = 0; i < n; i++)
        fast = fast->next;

    while (fast->next != NULL) {
        fast = fast->next;
        slow = slow->next;
    }

    struct ListNode *temp = slow->next;
    slow->next = temp->next;
    free(temp);

    return dummy.next;
}
