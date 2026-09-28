/*==========================================================================
 *  LeetCode 25 — Reverse Nodes in k-Group
 *  ------------------------------------------------------------------------
 *  Difficulty   : Hard
 *  Topics       : Linked List, Recursion
 *  Link         : https://leetcode.com/problems/reverse-nodes-in-k-group/
 *
 *  Approach     : Walk ahead to confirm a full group of `k` exists, then reverse it in place.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

struct ListNode* reverseKGroup(struct ListNode* head, int k) {
    struct ListNode dummy = {0, head};
    struct ListNode *group = &dummy;

    while (1) {
        struct ListNode *end = group;

        for (int i = 0; i < k && end; i++)
            end = end->next;

        if (!end)
            break;

        struct ListNode *start = group->next;
        struct ListNode *next = end->next;
        struct ListNode *prev = next;
        struct ListNode *cur = start;

        while (cur != next) {
            struct ListNode *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }

        group->next = end;
        group = start;
    }

    return dummy.next;
}
