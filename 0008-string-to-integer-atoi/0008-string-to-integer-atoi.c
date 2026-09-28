/*==========================================================================
 *  LeetCode 8 — String to Integer (atoi)
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : String
 *  Problem      : https://leetcode.com/problems/string-to-integer-atoi/
 *
 *  Approach     : Walk the string by hand through the four `atoi` phases.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <limits.h>
#include <ctype.h>

int myAtoi(char* s) {
    int i = 0;
    int sign = 1;
    int result = 0;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-' || s[i] == '+') {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

    while (isdigit(s[i])) {
        int digit = s[i] - '0';

        if (result > (INT_MAX - digit) / 10) {
            if (sign == 1)
                return INT_MAX;
            else
                return INT_MIN;
        }

        result = result * 10 + digit;
        i++;
    }

    return result * sign;
}
