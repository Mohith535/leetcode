<div align="center">

# 11. Container With Most Water

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/container-with-most-water/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0011-container-with-most-water.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-60.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/container-with-most-water/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Greedy](https://img.shields.io/badge/Greedy-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/container-with-most-water/) &nbsp;·&nbsp; [Read the code](./0011-container-with-most-water.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `i^th` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return *the maximum amount of water a container can store*.

**Notice** that you may not slant the container.

### Examples

**Example 1:**

![illustration](https://s3-lc-upload.s3.amazonaws.com/uploads/2018/07/17/question_11.jpg)

```text
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
```

**Example 2:**

```text
Input: height = [1,1]
Output: 1
```

### Constraints

- `n == height.length`
- `2 <= n <= 10^5`
- `0 <= height[i] <= 10^4`

---

## My Approach — K MOHITH KANNAN

> **Two pointers from both ends, always retreating from the shorter wall.**

1. Area is `min(height[left], height[right]) * (right - left)`.
2. Keep the running maximum.
3. Moving the taller wall can never help - width shrinks and height is still capped by the shorter wall - so move the shorter one.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0011-container-with-most-water.c`](./0011-container-with-most-water.c) | ✅ Accepted |
| Python | `0011-container-with-most-water.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0011-container-with-most-water.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
