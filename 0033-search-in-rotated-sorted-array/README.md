<div align="center">

# 33. Search in Rotated Sorted Array

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/search-in-rotated-sorted-array/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0033-search-in-rotated-sorted-array.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-45.7%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/search-in-rotated-sorted-array/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Binary Search](https://img.shields.io/badge/Binary%20Search-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/search-in-rotated-sorted-array/) &nbsp;·&nbsp; [Read the code](./0033-search-in-rotated-sorted-array.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

There is an integer array `nums` sorted in ascending order (with **distinct** values).

Prior to being passed to your function, `nums` is **possibly left rotated** at an unknown index `k` (`1 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (**0-indexed**). For example, `[0,1,2,4,5,6,7]` might be left rotated by `3` indices and become `[4,5,6,7,0,1,2]`.

Given the array `nums` **after** the possible rotation and an integer `target`, return *the index of*`target`*if it is in*`nums`*, or*`-1`*if it is not in*`nums`.

You must write an algorithm with `O(log n)` runtime complexity.

### Examples

**Example 1:**

```text
Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
```

**Example 2:**

```text
Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1
```

**Example 3:**

```text
Input: nums = [1], target = 0
Output: -1
```

### Constraints

- `1 <= nums.length <= 5000`
- `-10^4 <= nums[i] <= 10^4`
- All values of `nums` are **unique**.
- `nums` is an ascending array that is possibly rotated.
- `-10^4 <= target <= 10^4`

---

## My Approach — K MOHITH KANNAN

> **Binary search, but first work out which half is still sorted.**

1. Compute `mid` as `left + (right - left) / 2`, which cannot overflow.
2. `nums[left] <= nums[mid]` means the left half is sorted: recurse into it if the target lies in its range, otherwise go right.
3. Otherwise the right half is sorted: same range test, mirrored.
4. The rotation point is always in the half that is *not* sorted, so it is never searched blindly.

### Complexity

| | |
|---|---|
| **Time** | `O(log n)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0033-search-in-rotated-sorted-array.c`](./0033-search-in-rotated-sorted-array.c) | ✅ Accepted |
| Python | `0033-search-in-rotated-sorted-array.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0033-search-in-rotated-sorted-array.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
