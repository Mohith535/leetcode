/*==========================================================================
 *  LeetCode 16 — 3Sum Closest
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Array, Two Pointers, Sorting
 *  Link         : https://leetcode.com/problems/3sum-closest/
 *
 *  Approach     : Same sort-plus-two-pointer sweep, but tracking distance to the target instead of zero.
 *  Time         : O(n^2)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int threeSumClosest(int* nums, int numsSize, int target) {
    qsort(nums, numsSize, sizeof(int), cmp);

    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < numsSize - 2; i++) {
        int left = i + 1;
        int right = numsSize - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (abs(sum - target) < abs(closest - target))
                closest = sum;

            if (sum < target)
                left++;
            else if (sum > target)
                right--;
            else
                return sum;
        }
    }

    return closest;
}
