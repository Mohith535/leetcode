/*==========================================================================
 *  LeetCode 10 — Regular Expression Matching
 *  ------------------------------------------------------------------------
 *  Difficulty   : Hard
 *  Topics       : String, Dynamic Programming, Recursion
 *  Link         : https://leetcode.com/problems/regular-expression-matching/
 *
 *  Approach     : Bottom-up DP over prefixes: `dp[i][j]` = does `s[0..i)` match `p[0..j)`?
 *  Time         : O(m * n)
 *  Space        : O(m * n)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <string.h>
#include <stdbool.h>

bool isMatch(char* s, char* p) {
    int m = strlen(s);
    int n = strlen(p);

    bool dp[21][21] = {false};

    dp[0][0] = true;

    for (int j = 2; j <= n; j++) {
        if (p[j - 1] == '*')
            dp[0][j] = dp[0][j - 2];
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {

            if (p[j - 1] == '.' || p[j - 1] == s[i - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            }

            else if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2];

                if (p[j - 2] == '.' || p[j - 2] == s[i - 1])
                    dp[i][j] |= dp[i - 1][j];
            }
        }
    }

    return dp[m][n];
}
