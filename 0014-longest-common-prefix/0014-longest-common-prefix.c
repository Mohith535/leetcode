/*==========================================================================
 *  LeetCode 14 — Longest Common Prefix
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Array, String, Trie
 *  Link         : https://leetcode.com/problems/longest-common-prefix/
 *
 *  Approach     : Take string 0 as the candidate prefix and shrink it against every other string.
 *  Time         : O(S)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char *prefix = strs[0];
    int len = strlen(prefix);

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        while (j < len && strs[i][j] == prefix[j])
            j++;

        len = j;

        if (len == 0)
            return "";
    }

    char *result = malloc(len + 1);
    strncpy(result, prefix, len);
    result[len] = '\0';

    return result;
}
