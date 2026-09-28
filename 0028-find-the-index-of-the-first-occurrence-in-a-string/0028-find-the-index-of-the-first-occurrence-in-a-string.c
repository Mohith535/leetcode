/*==========================================================================
 *  LeetCode 28 — Find the Index of the First Occurrence in a String
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Two Pointers, String, String Matching, Z Algorithm, Knuth–Morris–Pratt Algorithm, Boyer–Moore String-Search Algorithm
 *  Problem      : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/
 *
 *  Approach     : Slide the needle across the haystack and compare.
 *  Time         : O(n * m)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <string.h>

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);

    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        while (j < m && haystack[i + j] == needle[j])
            j++;

        if (j == m)
            return i;
    }

    return -1;
}
