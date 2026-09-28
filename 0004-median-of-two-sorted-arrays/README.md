<div align="center">

# 4. Median of Two Sorted Arrays

[![Difficulty](https://img.shields.io/badge/Hard-ff375f?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/median-of-two-sorted-arrays/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0004-median-of-two-sorted-arrays.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-47.7%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/median-of-two-sorted-arrays/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Binary Search](https://img.shields.io/badge/Binary%20Search-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Divide and Conquer](https://img.shields.io/badge/Divide%20and%20Conquer-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/median-of-two-sorted-arrays/) &nbsp;·&nbsp; [Read the code](./0004-median-of-two-sorted-arrays.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given two sorted arrays `nums1` and `nums2` of size `m` and `n` respectively, return **the median** of the two sorted arrays.

The overall run time complexity should be `O(log (m+n))`.

### Examples

**Example 1:**

```text
Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
```

**Example 2:**

```text
Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
```

### Constraints

- `nums1.length == m`
- `nums2.length == n`
- `0 <= m <= 1000`
- `0 <= n <= 1000`
- `1 <= m + n <= 2000`
- `-10^6 <= nums1[i], nums2[i] <= 10^6`

---

## My Approach — K MOHITH KANNAN

> **Merge both sorted arrays outright, then read the middle.**

1. Standard two-pointer merge into an auxiliary array `a` of size `m + n`.
2. Drain whichever array still has elements left.
3. Odd total returns the centre element; even total averages the two middle ones as a `double`.

### Complexity

| | |
|---|---|
| **Time** | `O(m + n)` |
| **Space** | `O(m + n)` |

> [!NOTE]
> LeetCode's follow-up asks for O(log(m+n)) via binary search on the partition. This merge version is the clear, provably-correct baseline.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0004-median-of-two-sorted-arrays.c`](./0004-median-of-two-sorted-arrays.c) | ✅ Accepted |
| Python | `0004-median-of-two-sorted-arrays.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0004-median-of-two-sorted-arrays.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
