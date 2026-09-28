<div align="center">

# 31. Next Permutation

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/next-permutation/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0031-next-permutation.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-46.3%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/next-permutation/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/next-permutation/) &nbsp;·&nbsp; [Read the code](./0031-next-permutation.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

A **permutation** of an array of integers is an arrangement of its members into a sequence or linear order.

- For example, for `arr = [1,2,3]`, the following are all the permutations of `arr`: `[1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1]`.

The **next permutation** of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the **next permutation** of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

- For example, the next permutation of `arr = [1,2,3]` is `[1,3,2]`.
- Similarly, the next permutation of `arr = [2,3,1]` is `[3,1,2]`.
- While the next permutation of `arr = [3,2,1]` is `[1,2,3]` because `[3,2,1]` does not have a lexicographical larger rearrangement.

Given an array of integers `nums`, *find the next permutation of* `nums`.

The replacement must be **in place** and use only constant extra memory.

### Examples

**Example 1:**

```text
Input: nums = [1,2,3]
Output: [1,3,2]
```

**Example 2:**

```text
Input: nums = [3,2,1]
Output: [1,2,3]
```

**Example 3:**

```text
Input: nums = [1,1,5]
Output: [1,5,1]
```

### Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 100`

---

## My Approach — K MOHITH KANNAN

> **Find the rightmost ascent, swap in its next-largest successor, then reverse the tail.**

1. Scan right to left for the first `i` with `nums[i] < nums[i+1]` - the pivot.
2. No pivot means the array is the last permutation, so the whole thing reverses to the first.
3. Otherwise find the rightmost `j` with `nums[j] > nums[i]` and swap them.
4. Reverse everything after `i`; that suffix was descending, so reversing makes it the smallest arrangement.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(1)` |

> [!NOTE]
> In place, as the problem demands - no extra array.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0031-next-permutation.c`](./0031-next-permutation.c) | ✅ Accepted |
| Python | `0031-next-permutation.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0031-next-permutation.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
