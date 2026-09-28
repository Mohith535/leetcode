/*==========================================================================
 *  LeetCode 30 — Substring with Concatenation of All Words
 *  ------------------------------------------------------------------------
 *  Difficulty   : Hard
 *  Topics       : Hash Table, String, Sliding Window
 *  Problem      : https://leetcode.com/problems/substring-with-concatenation-of-all-words/
 *
 *  Approach     : One sliding window per starting offset, matched on word counts instead of characters.
 *  Time         : O(wordLen * n * k)
 *  Space        : O(k)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>
#include <string.h>

int findWord(char **words, int wordsSize, char *word) {
    for (int i = 0; i < wordsSize; i++) {
        if (strcmp(words[i], word) == 0)
            return i;
    }
    return -1;
}

int* findSubstring(char* s, char** words, int wordsSize, int* returnSize) {
    int sLen = strlen(s);
    int wordLen = strlen(words[0]);
    int totalLen = wordLen * wordsSize;

    int *result = malloc(sLen * sizeof(int));
    *returnSize = 0;

    if (totalLen > sLen)
        return result;

    int *need = calloc(wordsSize, sizeof(int));

    for (int i = 0; i < wordsSize; i++) {
        int index = findWord(words, wordsSize, words[i]);
        need[index]++;
    }

    for (int offset = 0; offset < wordLen; offset++) {
        int left = offset;
        int count = 0;

        int *have = calloc(wordsSize, sizeof(int));

        for (int right = offset; right + wordLen <= sLen; right += wordLen) {
            char word[31];
            strncpy(word, s + right, wordLen);
            word[wordLen] = '\0';

            int index = findWord(words, wordsSize, word);

            if (index == -1) {
                memset(have, 0, wordsSize * sizeof(int));
                count = 0;
                left = right + wordLen;
                continue;
            }

            have[index]++;
            count++;

            while (have[index] > need[index]) {
                char leftWord[31];

                strncpy(leftWord, s + left, wordLen);
                leftWord[wordLen] = '\0';

                int leftIndex = findWord(words, wordsSize, leftWord);

                have[leftIndex]--;
                left += wordLen;
                count--;
            }

            if (count == wordsSize) {
                result[(*returnSize)++] = left;

                char leftWord[31];

                strncpy(leftWord, s + left, wordLen);
                leftWord[wordLen] = '\0';

                int leftIndex = findWord(words, wordsSize, leftWord);

                have[leftIndex]--;
                left += wordLen;
                count--;
            }
        }

        free(have);
    }

    free(need);
    return result;
}
