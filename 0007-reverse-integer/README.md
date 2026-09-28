<div align="center">

# 7. Reverse Integer

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/reverse-integer/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0007-reverse-integer.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-32.6%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/reverse-integer/)

![Math](https://img.shields.io/badge/Math-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/reverse-integer/) &nbsp;·&nbsp; [Read the code](./0007-reverse-integer.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a signed 32-bit integer `x`, return `x`*with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-2^31, 2^31 - 1]`, then return `0`.

**Assume the environment does not allow you to store 64-bit integers (signed or unsigned).**

### Examples

**Example 1:**

```text
Input: x = 123
Output: 321
```

**Example 2:**

```text
Input: x = -123
Output: -321
```

**Example 3:**

```text
Input: x = 120
Output: 21
```

### Constraints

- `-2^31 <= x <= 2^31 - 1`

---

## My Approach — K MOHITH KANNAN

> **Pop digits off the back and push them on, checking for overflow *before* it happens.**

1. `digit = x % 10`, then `x /= 10` - works for negatives in C99 since `%` truncates toward zero.
2. Before multiplying, compare `rev` against `INT_MAX / 10` and `INT_MIN / 10`.
3. The boundary digits 7 and -8 come from the last digit of 2147483647 / -2147483648.
4. Return 0 the moment the next step would overflow.

### Complexity

| | |
|---|---|
| **Time** | `O(log x)` |
| **Space** | `O(1)` |

> [!NOTE]
> Never lets the overflow occur, so there is no undefined behaviour - the usual trap in this problem.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0007-reverse-integer.c`](./0007-reverse-integer.c) | ✅ Accepted |
| Python | `0007-reverse-integer.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0007-reverse-integer.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
