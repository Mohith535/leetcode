<div align="center">

# 16. 3Sum Closest

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/3sum-closest/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0016-3sum-closest.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-47.5%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/3sum-closest/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Sorting](https://img.shields.io/badge/Sorting-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/3sum-closest/) &nbsp;·&nbsp; [Read the code](./0016-3sum-closest.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

You are given an integer array `nums` of length `n` and an integer `target`.

Find three integers at **distinct indices** in `nums` such that the sum is **closest** to `target`.

Return the sum of the three integers.

You may assume that each input would have **exactly** one solution.

### Examples

**Example 1:**

```text
Input: nums = [-1,2,1,-4], target = 1
Output: 2
Explanation: The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).
```

**Example 2:**

```text
Input: nums = [0,0,0], target = 1
Output: 0
Explanation: The sum that is closest to the target is 0. (0 + 0 + 0 = 0).
```

### Constraints

- `3 <= nums.length <= 500`
- `-1000 <= nums[i] <= 1000`
- `-10^4 <= target <= 10^4`

---

## My Approach — K MOHITH KANNAN

> **Same sort-plus-two-pointer sweep, but tracking distance to the target instead of zero.**

1. Seed `closest` with the first three elements.
2. For each anchor, converge two pointers and keep the sum with the smaller `abs(sum - target)`.
3. An exact hit returns immediately - nothing beats a distance of 0.

### Complexity

| | |
|---|---|
| **Time** | `O(n^2)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0016-3sum-closest.c`](./0016-3sum-closest.c) | ✅ Accepted |
| Python | `0016-3sum-closest.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0016-3sum-closest.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
