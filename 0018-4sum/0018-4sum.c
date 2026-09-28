/*==========================================================================
 *  LeetCode 18 — 4Sum
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Array, Two Pointers, Sorting
 *  Link         : https://leetcode.com/problems/4sum/
 *
 *  Approach     : Two nested anchors plus the same two-pointer sweep - 3Sum with one more loop.
 *  Time         : O(n^3)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>

int cmp(const void *a, const void *b) {
    long x = *(const int *)a;
    long y = *(const int *)b;
    return (x > y) - (x < y);
}

int** fourSum(int* nums, int numsSize, int target,
             int* returnSize, int** returnColumnSizes) {

    int capacity = 1000;

    int **result = malloc(capacity * sizeof(int *));
    *returnColumnSizes = malloc(capacity * sizeof(int));
    *returnSize = 0;

    qsort(nums, numsSize, sizeof(int), cmp);

    for (int i = 0; i < numsSize - 3; i++) {

        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < numsSize - 2; j++) {

            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            int left = j + 1;
            int right = numsSize - 1;

            while (left < right) {

                long sum = (long)nums[i] + nums[j]
                         + nums[left] + nums[right];

                if (sum == target) {

                    if (*returnSize >= capacity) {
                        capacity *= 2;
                        result = realloc(result,
                                         capacity * sizeof(int *));
                        *returnColumnSizes = realloc(
                            *returnColumnSizes,
                            capacity * sizeof(int)
                        );
                    }

                    result[*returnSize] = malloc(4 * sizeof(int));

                    result[*returnSize][0] = nums[i];
                    result[*returnSize][1] = nums[j];
                    result[*returnSize][2] = nums[left];
                    result[*returnSize][3] = nums[right];

                    (*returnColumnSizes)[*returnSize] = 4;
                    (*returnSize)++;

                    int lval = nums[left];
                    int rval = nums[right];

                    while (left < right && nums[left] == lval)
                        left++;

                    while (left < right && nums[right] == rval)
                        right--;

                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    return result;
}
