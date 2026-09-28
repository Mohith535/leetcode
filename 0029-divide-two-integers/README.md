<div align="center">

# 29. Divide Two Integers

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/divide-two-integers/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0029-divide-two-integers.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-20.4%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/divide-two-integers/)

![Math](https://img.shields.io/badge/Math-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Bit Manipulation](https://img.shields.io/badge/Bit%20Manipulation-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/divide-two-integers/) &nbsp;·&nbsp; [Read the code](./0029-divide-two-integers.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given two integers `dividend` and `divisor`, divide two integers **without** using multiplication, division, and mod operator.

The integer division should truncate toward zero, which means losing its fractional part. For example, `8.345` would be truncated to `8`, and `-2.7335` would be truncated to `-2`.

Return *the **quotient** after dividing*`dividend`*by*`divisor`.

**Note:**Assume we are dealing with an environment that could only store integers within the **32-bit** signed integer range: `[−2^31, 2^31 − 1]`. For this problem, if the quotient is **strictly greater than** `2^31 - 1`, then return `2^31 - 1`, and if the quotient is **strictly less than** `-2^31`, then return `-2^31`.

### Examples

**Example 1:**

```text
Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
```

**Example 2:**

```text
Input: dividend = 7, divisor = -3
Output: -2
Explanation: 7/-3 = -2.33333.. which is truncated to -2.
```

### Constraints

- `-2^31 <= dividend, divisor <= 2^31 - 1`
- `divisor != 0`

---

## My Approach — K MOHITH KANNAN

> **Long division in binary: double the divisor while it fits, subtract, repeat.**

1. Handle `INT_MIN / -1` first - its true result is the only one that overflows `int`.
2. Widen both operands to `long long`, record the sign with `(a < 0) ^ (b < 0)`, then work with magnitudes.
3. Left-shift `temp` (and its `count`) while `a >= temp << 1`.
4. Subtract `temp`, add `count` to the answer, and restart the doubling.
5. Reapply the sign at the end.

### Complexity

| | |
|---|---|
| **Time** | `O(log^2 n)` |
| **Space** | `O(1)` |

> [!NOTE]
> No `*`, `/` or `%` on the operands, as the problem requires. Widening to `long long` is what makes negating `INT_MIN` safe.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0029-divide-two-integers.c`](./0029-divide-two-integers.c) | ✅ Accepted |
| Python | `0029-divide-two-integers.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0029-divide-two-integers.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
