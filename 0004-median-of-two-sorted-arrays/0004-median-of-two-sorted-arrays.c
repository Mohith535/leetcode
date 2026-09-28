/*==========================================================================
 *  LeetCode 4 — Median of Two Sorted Arrays
 *  ------------------------------------------------------------------------
 *  Difficulty   : Hard
 *  Topics       : Array, Binary Search, Divide and Conquer
 *  Problem      : https://leetcode.com/problems/median-of-two-sorted-arrays/
 *
 *  Approach     : Merge both sorted arrays outright, then read the middle.
 *  Time         : O(m + n)
 *  Space        : O(m + n)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Solved as    : https://leetcode.com/u/Mohith535/
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size,
                              int* nums2, int nums2Size) {
    int i = 0, j = 0, k = 0;
    int total = nums1Size + nums2Size;
    int *a = malloc(total * sizeof(int));

    while (i < nums1Size && j < nums2Size) {
        if (nums1[i] < nums2[j])
            a[k++] = nums1[i++];
        else
            a[k++] = nums2[j++];
    }

    while (i < nums1Size)
        a[k++] = nums1[i++];

    while (j < nums2Size)
        a[k++] = nums2[j++];

    if (total % 2 == 1)
        return a[total / 2];

    return (a[total / 2 - 1] + a[total / 2]) / 2.0;
}
