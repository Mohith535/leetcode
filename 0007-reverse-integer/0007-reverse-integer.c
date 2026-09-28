/*==========================================================================
 *  LeetCode 7 — Reverse Integer
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Math
 *  Problem      : https://leetcode.com/problems/reverse-integer/
 *
 *  Approach     : Pop digits off the back and push them on, checking for overflow *before* it happens.
 *  Time         : O(log x)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <limits.h>

int reverse(int x) {
    int rev = 0;

    while (x != 0) {
        int digit = x % 10;
        x /= 10;

        if (rev > INT_MAX / 10 || 
            (rev == INT_MAX / 10 && digit > 7))
            return 0;

        if (rev < INT_MIN / 10 || 
            (rev == INT_MIN / 10 && digit < -8))
            return 0;

        rev = rev * 10 + digit;
    }

    return rev;
}
