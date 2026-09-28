/*==========================================================================
 *  LeetCode 1 — Two Sum
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Array, Hash Table
 *  Problem      : https://leetcode.com/problems/two-sum/
 *
 *  Approach     : Brute-force every pair until the target shows up.
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

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {

    int* result = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++) {

        for (int j = i + 1; j < numsSize; j++) {

            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return result;
}
