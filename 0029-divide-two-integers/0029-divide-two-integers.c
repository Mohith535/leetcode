/*==========================================================================
 *  LeetCode 29 — Divide Two Integers
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Math, Bit Manipulation
 *  Problem      : https://leetcode.com/problems/divide-two-integers/
 *
 *  Approach     : Long division in binary: double the divisor while it fits, subtract, repeat.
 *  Time         : O(log^2 n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

int divide(int dividend, int divisor) {
    if (dividend == -2147483648 && divisor == -1)
        return 2147483647;

    long long a = dividend;
    long long b = divisor;
    int sign = (a < 0) ^ (b < 0);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    long long ans = 0;

    while (a >= b) {
        long long temp = b;
        long long count = 1;

        while (a >= (temp << 1)) {
            temp <<= 1;
            count <<= 1;
        }

        a -= temp;
        ans += count;
    }

    return sign ? -ans : ans;
}
