<div align="center">

# 22. Generate Parentheses

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/generate-parentheses/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0022-generate-parentheses.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-79.2%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/generate-parentheses/)

![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Dynamic Programming](https://img.shields.io/badge/Dynamic%20Programming-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Backtracking](https://img.shields.io/badge/Backtracking-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Bracket Sequences](https://img.shields.io/badge/Bracket%20Sequences-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/generate-parentheses/) &nbsp;·&nbsp; [Read the code](./0022-generate-parentheses.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given `n` pairs of parentheses, write a function to *generate all combinations of well-formed parentheses*.

### Examples

**Example 1:**

```text
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
```

**Example 2:**

```text
Input: n = 1
Output: ["()"]
```

### Constraints

- `1 <= n <= 8`

---

## My Approach — K MOHITH KANNAN

> **Backtracking constrained so only valid strings are ever built.**

1. Add `(` while `open < n`.
2. Add `)` only while `close < open`, which is what keeps every prefix balanced.
3. At length `2n`, NUL-terminate and copy the string into the result block.
4. No validation pass is needed - malformed strings are never generated.

### Complexity

| | |
|---|---|
| **Time** | `O(4^n / sqrt(n))` |
| **Space** | `O(n)` |

> [!NOTE]
> The count is the nth Catalan number; the 5000-pointer block covers `n <= 8`, where Catalan(8) = 1430.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0022-generate-parentheses.c`](./0022-generate-parentheses.c) | ✅ Accepted |
| Python | `0022-generate-parentheses.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0022-generate-parentheses.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
