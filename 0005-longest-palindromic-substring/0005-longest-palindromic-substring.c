/*==========================================================================
 *  LeetCode 5 — Longest Palindromic Substring
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Two Pointers, String, Dynamic Programming, Manacher
 *  Problem      : https://leetcode.com/problems/longest-palindromic-substring/
 *
 *  Approach     : Expand around every possible centre.
 *  Time         : O(n^2)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {
    int n = strlen(s);
    int start = 0, maxLen = 1;

    for (int i = 0; i < n; i++) {

        int l = i, r = i;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }

        l = i;
        r = i + 1;
        while (l >= 0 && r < n && s[l] == s[r]) {
            if (r - l + 1 > maxLen) {
                start = l;
                maxLen = r - l + 1;
            }
            l--;
            r++;
        }
    }

    char *result = malloc(maxLen + 1);
    strncpy(result, s + start, maxLen);
    result[maxLen] = '\0';

    return result;
}
