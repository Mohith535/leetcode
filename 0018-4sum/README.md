<div align="center">

# 18. 4Sum

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/4sum/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0018-4sum.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-41.8%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/4sum/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Sorting](https://img.shields.io/badge/Sorting-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/4sum/) &nbsp;·&nbsp; [Read the code](./0018-4sum.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given an array `nums` of `n` integers, return *an array of all the **unique** quadruplets* `[nums[a], nums[b], nums[c], nums[d]]` such that:

- `0 <= a, b, c, d < n`
- `a`, `b`, `c`, and `d` are **distinct**.
- `nums[a] + nums[b] + nums[c] + nums[d] == target`

You may return the answer in **any order**.

### Examples

**Example 1:**

```text
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]
```

**Example 2:**

```text
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]
```

### Constraints

- `1 <= nums.length <= 200`
- `-10^9 <= nums[i] <= 10^9`
- `-10^9 <= target <= 10^9`

---

## My Approach — K MOHITH KANNAN

> **Two nested anchors plus the same two-pointer sweep - 3Sum with one more loop.**

1. Sort, then fix `nums[i]` and `nums[j]`, skipping repeats at both levels.
2. Converge `left` / `right` against `target`.
3. On a hit, store the quadruple and jump both pointers past their duplicate runs.
4. `realloc` doubles the result block when the initial 1000 rows fill up.

### Complexity

| | |
|---|---|
| **Time** | `O(n^3)` |
| **Space** | `O(1)` |

> [!NOTE]
> The comparator and the running sum both use `long`, which matters here: four values near +/-10^9 overflow `int`, and so does a naive `a - b` comparator. Space excludes the returned quadruples.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0018-4sum.c`](./0018-4sum.c) | ✅ Accepted |
| Python | `0018-4sum.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0018-4sum.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
