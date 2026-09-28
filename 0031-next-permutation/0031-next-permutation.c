/*==========================================================================
 *  LeetCode 31 — Next Permutation
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Array, Two Pointers
 *  Problem      : https://leetcode.com/problems/next-permutation/
 *
 *  Approach     : Find the rightmost ascent, swap in its next-largest successor, then reverse the tail.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void nextPermutation(int* nums, int numsSize) {

    int i = numsSize - 2;

    // 1. Find the first decreasing element from right
    while (i >= 0 && nums[i] >= nums[i + 1])
        i--;

    // 2. If found, find the next bigger element
    if (i >= 0) {
        int j = numsSize - 1;

        while (nums[j] <= nums[i])
            j--;

        swap(&nums[i], &nums[j]);
    }

    // 3. Reverse everything after i
    int left = i + 1;
    int right = numsSize - 1;

    while (left < right) {
        swap(&nums[left], &nums[right]);
        left++;
        right--;
    }
}
