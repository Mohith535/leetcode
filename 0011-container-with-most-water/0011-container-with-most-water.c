/*==========================================================================
 *  LeetCode 11 — Container With Most Water
 *  ------------------------------------------------------------------------
 *  Difficulty   : Medium
 *  Topics       : Array, Two Pointers, Greedy
 *  Link         : https://leetcode.com/problems/container-with-most-water/
 *
 *  Approach     : Two pointers from both ends, always retreating from the shorter wall.
 *  Time         : O(n)
 *  Space        : O(1)
 *
 *  Author       : K MOHITH KANNAN  (github.com/Mohith535)
 *  Portfolio    : https://mohith535.github.io/portfolio/
 *  Repository   : https://github.com/Mohith535/leetcode
 *  License      : MIT — © K MOHITH KANNAN. Written by hand, not generated.
 ==========================================================================*/

int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max = 0;

    while (left < right) {
        int h = height[left] < height[right]
                ? height[left]
                : height[right];

        int area = h * (right - left);

        if (area > max)
            max = area;

        if (height[left] < height[right])
            left++;
        else
            right--;
    }

    return max;
}
