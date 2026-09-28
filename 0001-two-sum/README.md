<div align="center">

# 1. Two Sum

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/two-sum/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0001-two-sum.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-57.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/two-sum/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Hash Table](https://img.shields.io/badge/Hash%20Table-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/two-sum/) &nbsp;·&nbsp; [Read the code](./0001-two-sum.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

You are given an array of integers `nums` and an integer `target`, return *indices of the two numbers such that they add up to `target`*.

You may assume that each input would have ***exactly* one solution**, and you may not use the *same* element twice.

You can return the answer in any order.

### Examples

**Example 1:**

```text
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
```

**Example 2:**

```text
Input: nums = [3,2,4], target = 6
Output: [1,2]
```

**Example 3:**

```text
Input: nums = [3,3], target = 6
Output: [0,1]
```

### Constraints

- `2 time complexity?

---

## My Approach — K MOHITH KANNAN

> **Brute-force every pair until the target shows up.**

1. Allocate the 2-slot answer array up front and set `*returnSize = 2`.
2. Outer loop fixes `i`; inner loop walks every `j > i`.
3. First pair whose sum equals `target` is written out and returned immediately.

### Complexity

| | |
|---|---|
| **Time** | `O(n^2)` |
| **Space** | `O(1)` |

> [!NOTE]
> A hash map would bring this to O(n). Kept the direct two-loop version - it is the honest first solve and passes comfortably at n <= 10^4.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0001-two-sum.c`](./0001-two-sum.c) | ✅ Accepted |
| Python | `0001-two-sum.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0001-two-sum.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
