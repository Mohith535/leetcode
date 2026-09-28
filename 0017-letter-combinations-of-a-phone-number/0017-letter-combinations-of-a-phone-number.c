/*==========================================================================
 *  LeetCode 17 — Letter Combinations of a Phone Number
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Hash Table, String, Backtracking
 *  Link         : https://leetcode.com/problems/letter-combinations-of-a-phone-number/
 *
 *  Approach     : Backtracking: choose a letter for the current digit, recurse, repeat.
 *  Time         : O(4^n * n)
 *  Space        : O(n)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>
#include <string.h>

char *map[] = {
    "", "", "abc", "def", "ghi",
    "jkl", "mno", "pqrs", "tuv", "wxyz"
};

void backtrack(char *digits, int pos, int n, char *cur,
               char **res, int *size) {
    if (pos == n) {
        cur[pos] = '\0';
        res[*size] = malloc((n + 1) * sizeof(char));
        strcpy(res[*size], cur);
        (*size)++;
        return;
    }

    char *letters = map[digits[pos] - '0'];

    for (int i = 0; letters[i]; i++) {
        cur[pos] = letters[i];
        backtrack(digits, pos + 1, n, cur, res, size);
    }
}

char** letterCombinations(char* digits, int* returnSize) {
    if (digits[0] == '\0') {
        *returnSize = 0;
        return NULL;
    }

    int n = strlen(digits);

    char **res = malloc(256 * sizeof(char *));
    char *cur = malloc((n + 1) * sizeof(char));

    *returnSize = 0;

    backtrack(digits, 0, n, cur, res, returnSize);

    free(cur);
    return res;
}
