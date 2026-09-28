/*==========================================================================
 *  LeetCode 27 — Remove Element
 *  ------------------------------------------------------------------------
 *  Difficulty   : Easy
 *  Topics       : Array, Two Pointers
 *  Problem      : https://leetcode.com/problems/remove-element/
 *
 *  Approach     : Same write-pointer compaction, filtering on value instead of on the neighbour.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

int removeElement(int* nums, int numsSize, int val) {
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val)
            nums[k++] = nums[i];
    }

    return k;
}
