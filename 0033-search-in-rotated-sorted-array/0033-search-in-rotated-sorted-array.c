/*==========================================================================
 *  LeetCode 33 — Search in Rotated Sorted Array
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Array, Binary Search
 *  Problem      : https://leetcode.com/problems/search-in-rotated-sorted-array/
 *
 *  Approach     : Binary search, but first work out which half is still sorted.
 *  Time         : O(log n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

int search(int* nums, int numsSize, int target) {

    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        // Left half is sorted
        if (nums[left] <= nums[mid]) {

            if (nums[left] <= target && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }

        // Right half is sorted
        else {

            if (nums[mid] < target && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1;
}
