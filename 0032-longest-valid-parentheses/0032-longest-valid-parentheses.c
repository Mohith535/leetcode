/*==========================================================================
 *  LeetCode 32 — Longest Valid Parentheses
 *  ------------------------------------------------------------------------
 *  Difficulty   : Hard
 *  Topics       : String, Dynamic Programming, Stack, Bracket Sequences
 *  Problem      : https://leetcode.com/problems/longest-valid-parentheses/
 *
 *  Approach     : Stack of indices with a -1 sentinel, so a valid run's length is just an index difference.
 *  Time         : O(n)
 *  Space        : O(n)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>
#include <string.h>

int longestValidParentheses(char* s) {

    int n = strlen(s);
    int *stack = malloc((n + 1) * sizeof(int));

    int top = -1;
    int ans = 0;

    stack[++top] = -1;

    for (int i = 0; i < n; i++) {

        if (s[i] == '(') {
            stack[++top] = i;
        }
        else {
            top--;

            if (top == -1) {
                stack[++top] = i;
            }
            else {
                int len = i - stack[top];

                if (len > ans)
                    ans = len;
            }
        }
    }

    free(stack);
    return ans;
}
