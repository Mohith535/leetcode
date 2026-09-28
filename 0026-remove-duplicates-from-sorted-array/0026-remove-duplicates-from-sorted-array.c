/*==========================================================================
 *  LeetCode 26 — Remove Duplicates from Sorted Array
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Array, Two Pointers
 *  Link         : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 *
 *  Approach     : Slow/fast write pointer; sortedness means duplicates are adjacent.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

int removeDuplicates(int* nums, int numsSize) {
    int k = 1;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[i - 1])
            nums[k++] = nums[i];
    }

    return k;
}
