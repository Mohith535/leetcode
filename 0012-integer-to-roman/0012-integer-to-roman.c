/*==========================================================================
 *  LeetCode 12 — Integer to Roman
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Hash Table, Math, String
 *  Link         : https://leetcode.com/problems/integer-to-roman/
 *
 *  Approach     : Greedy subtraction over a value table that already contains the subtractive pairs.
 *  Time         : O(1)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>
#include <string.h>

char* intToRoman(int num) {
    int values[] = {
        1000, 900, 500, 400,
        100, 90, 50, 40,
        10, 9, 5, 4, 1
    };

    char *symbols[] = {
        "M", "CM", "D", "CD",
        "C", "XC", "L", "XL",
        "X", "IX", "V", "IV", "I"
    };

    char *result = malloc(20);
    int k = 0;

    for (int i = 0; i < 13; i++) {
        while (num >= values[i]) {
            num -= values[i];

            int len = strlen(symbols[i]);
            for (int j = 0; j < len; j++)
                result[k++] = symbols[i][j];
        }
    }

    result[k] = '\0';

    return result;
}
