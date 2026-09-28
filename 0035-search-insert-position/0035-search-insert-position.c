/*==========================================================================
 *  LeetCode 35 — Search Insert Position
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Array, Binary Search
 *  Link         : https://leetcode.com/problems/search-insert-position/
 *
 *  Approach     : Plain binary search; the final `left` is the insertion point.
 *  Time         : O(log n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

int searchInsert(int* nums, int numsSize, int target) {

    int left = 0;
    int right = numsSize - 1;

    while (left <= right) {

        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return left;
}
