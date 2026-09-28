/*==========================================================================
 *  LeetCode 24 — Swap Nodes in Pairs
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Linked List, Recursion
 *  Link         : https://leetcode.com/problems/swap-nodes-in-pairs/
 *
 *  Approach     : Rewire pointers two nodes at a time; never touch the values.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy = {0, head};
    struct ListNode *cur = &dummy;

    while (cur->next && cur->next->next) {
        struct ListNode *a = cur->next;
        struct ListNode *b = a->next;

        a->next = b->next;
        b->next = a;
        cur->next = b;

        cur = a;
    }

    return dummy.next;
}
