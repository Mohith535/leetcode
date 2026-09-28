/*==========================================================================
 *  LeetCode 3 — Longest Substring Without Repeating Characters
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Hash Table, String, Sliding Window
 *  Problem      : https://leetcode.com/problems/longest-substring-without-repeating-characters/
 *
 *  Approach     : Sliding window that jumps forward using the last seen index of each character.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <string.h>

int lengthOfLongestSubstring(char* s) {
    int last[128];

    for (int i = 0; i < 128; i++)
        last[i] = -1;

    int start = 0;
    int max = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (last[(unsigned char)s[i]] >= start)
            start = last[(unsigned char)s[i]] + 1;

        last[(unsigned char)s[i]] = i;

        if (i - start + 1 > max)
            max = i - start + 1;
    }

    return max;
}
