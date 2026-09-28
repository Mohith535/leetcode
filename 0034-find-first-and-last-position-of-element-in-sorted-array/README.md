<div align="center">

# 34. Find First and Last Position of Element in Sorted Array

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0034-find-first-and-last-position-of-element-in-sorted-array.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-49.7%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Binary Search](https://img.shields.io/badge/Binary%20Search-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) &nbsp;·&nbsp; [Read the code](./0034-find-first-and-last-position-of-element-in-sorted-array.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(log n)` runtime complexity.

### Examples

**Example 1:**

```text
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
```

**Example 2:**

```text
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
```

**Example 3:**

```text
Input: nums = [], target = 0
Output: [-1,-1]
```

### Constraints

- `0 <= nums.length <= 10^5`
- `-10^9 <= nums[i] <= 10^9`
- `nums` is a non-decreasing array.
- `-10^9 <= target <= 10^9`

---

## My Approach — K MOHITH KANNAN

> **Two biased binary searches - one leans left, one leans right.**

1. `findFirst` records a hit then keeps searching left (`right = mid - 1`).
2. `findLast` records a hit then keeps searching right (`left = mid + 1`).
3. Both return -1 when the target is absent, which is exactly the required output.
4. `searchRange` runs them and returns the pair.

### Complexity

| | |
|---|---|
| **Time** | `O(log n)` |
| **Space** | `O(1)` |

> [!NOTE]
> Two O(log n) passes keep the required logarithmic bound - scanning outward from one hit would degrade to O(n) on an all-equal array.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0034-find-first-and-last-position-of-element-in-sorted-array.c`](./0034-find-first-and-last-position-of-element-in-sorted-array.c) | ✅ Accepted |
| Python | `0034-find-first-and-last-position-of-element-in-sorted-array.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0034-find-first-and-last-position-of-element-in-sorted-array.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
