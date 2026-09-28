/*==========================================================================
 *  LeetCode 22 — Generate Parentheses
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : String, Dynamic Programming, Backtracking, Bracket Sequences
 *  Problem      : https://leetcode.com/problems/generate-parentheses/
 *
 *  Approach     : Backtracking constrained so only valid strings are ever built.
 *  Time         : O(4^n / sqrt(n))
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

void generate(char **result, int *size, char *cur,
              int pos, int open, int close, int n) {

    if (pos == 2 * n) {
        cur[pos] = '\0';
        result[*size] = malloc((2 * n + 1) * sizeof(char));
        strcpy(result[*size], cur);
        (*size)++;
        return;
    }

    if (open < n) {
        cur[pos] = '(';
        generate(result, size, cur, pos + 1, open + 1, close, n);
    }

    if (close < open) {
        cur[pos] = ')';
        generate(result, size, cur, pos + 1, open, close + 1, n);
    }
}

char** generateParenthesis(int n, int* returnSize) {
    int capacity = 5000;

    char **result = malloc(capacity * sizeof(char *));
    char *cur = malloc((2 * n + 1) * sizeof(char));

    *returnSize = 0;

    generate(result, returnSize, cur, 0, 0, 0, n);

    free(cur);

    return result;
}
