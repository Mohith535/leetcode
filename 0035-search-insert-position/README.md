<div align="center">

# 35. Search Insert Position

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/search-insert-position/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0035-search-insert-position.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-52.3%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/search-insert-position/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Binary Search](https://img.shields.io/badge/Binary%20Search-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/search-insert-position/) &nbsp;·&nbsp; [Read the code](./0035-search-insert-position.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

### Examples

**Example 1:**

```text
Input: nums = [1,3,5,6], target = 5
Output: 2
```

**Example 2:**

```text
Input: nums = [1,3,5,6], target = 2
Output: 1
```

**Example 3:**

```text
Input: nums = [1,3,5,6], target = 7
Output: 4
```

### Constraints

- `1 <= nums.length <= 10^4`
- `-10^4 <= nums[i] <= 10^4`
- `nums` contains **distinct** values sorted in **ascending** order.
- `-10^4 <= target <= 10^4`

---

## My Approach — K MOHITH KANNAN

> **Plain binary search; the final `left` is the insertion point.**

1. Standard loop with the overflow-safe `mid`.
2. An exact match returns `mid`.
3. When the loop ends, `left` has settled on the first index whose value exceeds the target - the position to insert at.

### Complexity

| | |
|---|---|
| **Time** | `O(log n)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0035-search-insert-position.c`](./0035-search-insert-position.c) | ✅ Accepted |
| Python | `0035-search-insert-position.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0035-search-insert-position.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
