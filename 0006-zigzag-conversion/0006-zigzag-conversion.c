/*==========================================================================
 *  LeetCode 6 — Zigzag Conversion
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : String
 *  Problem      : https://leetcode.com/problems/zigzag-conversion/
 *
 *  Approach     : Compute each character's destination directly - no grid is ever built.
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

char* convert(char* s, int numRows) {
    int n = strlen(s);

    if (numRows == 1 || numRows >= n)
        return s;

    char *result = malloc(n + 1);
    int k = 0;
    int cycle = 2 * numRows - 2;

    for (int row = 0; row < numRows; row++) {
        for (int i = row; i < n; i += cycle) {
            result[k++] = s[i];

            int diagonal = i + cycle - 2 * row;

            if (row != 0 && row != numRows - 1 && diagonal < n)
                result[k++] = s[diagonal];
        }
    }

    result[k] = '\0';
    return result;
}
