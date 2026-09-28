/*==========================================================================
 *  LeetCode 34 — Find First and Last Position of Element in Sorted Array
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Array, Binary Search
 *  Problem      : https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 *
 *  Approach     : Two biased binary searches - one leans left, one leans right.
 *  Time         : O(log n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>

int findFirst(int* nums, int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            ans = mid;
            right = mid - 1;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return ans;
}

int findLast(int* nums, int n, int target) {
    int left = 0, right = n - 1;
    int ans = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            ans = mid;
            left = mid + 1;
        }
        else if (nums[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }

    return ans;
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {

    int* result = malloc(2 * sizeof(int));

    result[0] = findFirst(nums, numsSize, target);
    result[1] = findLast(nums, numsSize, target);

    *returnSize = 2;

    return result;
}
