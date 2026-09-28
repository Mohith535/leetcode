/*============================================================================
 *  leetcode.h - local-compile shim
 *  ------------------------------------------------------------------------
 *  LeetCode's C judge injects these type definitions for you, so the
 *  solution files deliberately do NOT declare them: every .c file in this
 *  repository pastes straight into the LeetCode editor with no edits.
 *
 *  This header exists only so the same files can be syntax-checked locally:
 *
 *      gcc -std=c17 -Wall -Wextra -fsyntax-only -include leetcode.h <file.c>
 *
 *  Add a struct here the first time a solution needs it.
 *
 *  Author  : K MOHITH KANNAN  (github.com/Mohith535)
 *  License : MIT - (c) K MOHITH KANNAN
 *==========================================================================*/

#ifndef LEETCODE_H
#define LEETCODE_H

/* singly-linked list: problems 2, 19, 21, 23, 24, 25 */
struct ListNode {
    int val;
    struct ListNode *next;
};

#endif /* LEETCODE_H */
