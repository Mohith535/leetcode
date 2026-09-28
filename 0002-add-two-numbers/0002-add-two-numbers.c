/*==========================================================================
 *  LeetCode 2 — Add Two Numbers
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Linked List, Math, Recursion
 *  Problem      : https://leetcode.com/problems/add-two-numbers/
 *
 *  Approach     : Add digit by digit like grade-school addition, carrying as you go.
 *  Time         : O(max(m, n))
 *  Space        : O(max(m, n))
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *head = NULL, *temp = NULL;
    int carry = 0;

    while (l1 || l2 || carry) {
        int sum = carry;

        if (l1) {
            sum += l1->val;
            l1 = l1->next;
        }

        if (l2) {
            sum += l2->val;
            l2 = l2->next;
        }

        struct ListNode *newNode = malloc(sizeof(struct ListNode));
        newNode->val = sum % 10;
        newNode->next = NULL;
        carry = sum / 10;

        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
    }

    return head;
}
