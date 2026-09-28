/*==========================================================================
 *  LeetCode 15 — 3Sum
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Array, Two Pointers, Sorting
 *  Problem      : https://leetcode.com/problems/3sum/
 *
 *  Approach     : Sort, then for each anchor run a two-pointer sweep for the remaining pair.
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

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes) {
    qsort(nums, numsSize, sizeof(int), cmp);

    int capacity = 1000;
    int **result = malloc(capacity * sizeof(int *));
    *returnColumnSizes = malloc(capacity * sizeof(int));
    *returnSize = 0;

    for (int i = 0; i < numsSize - 2; i++) {

        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            long sum = (long)nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                if (*returnSize >= capacity) {
                    capacity *= 2;
                    result = realloc(result, capacity * sizeof(int *));
                    *returnColumnSizes = realloc(
                        *returnColumnSizes,
                        capacity * sizeof(int)
                    );
                }

                result[*returnSize] = malloc(3 * sizeof(int));
                result[*returnSize][0] = nums[i];
                result[*returnSize][1] = nums[left];
                result[*returnSize][2] = nums[right];

                (*returnColumnSizes)[*returnSize] = 3;
                (*returnSize)++;

                int leftValue = nums[left];
                int rightValue = nums[right];

                while (left < right && nums[left] == leftValue)
                    left++;

                while (left < right && nums[right] == rightValue)
                    right--;
            }
            else if (sum < 0) {
                left++;
            }
            else {
                right--;
            }
        }
    }

    return result;
}
