<div align="center">

# 32. Longest Valid Parentheses

[![Difficulty](https://img.shields.io/badge/Hard-ff375f?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-valid-parentheses/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0032-longest-valid-parentheses.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-39.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-valid-parentheses/)

![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Dynamic Programming](https://img.shields.io/badge/Dynamic%20Programming-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Stack](https://img.shields.io/badge/Stack-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Bracket Sequences](https://img.shields.io/badge/Bracket%20Sequences-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/longest-valid-parentheses/) &nbsp;·&nbsp; [Read the code](./0032-longest-valid-parentheses.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a string containing just the characters `'('` and `')'`, return *the length of the longest valid (well-formed) parentheses**substring*.

### Examples

**Example 1:**

```text
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".
```

**Example 2:**

```text
Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".
```

**Example 3:**

```text
Input: s = ""
Output: 0
```

### Constraints

- `0 <= s.length <= 3 * 10^4`
- `s[i]` is `'('`, or `')'`.

---

## My Approach — K MOHITH KANNAN

> **Stack of indices with a -1 sentinel, so a valid run's length is just an index difference.**

1. Push -1 first; it acts as the boundary before the string starts.
2. Push the index of every `(`.
3. On `)`, pop. An empty stack means this `)` is unmatchable, so push its index as the new boundary.
4. Otherwise `i - stack[top]` is the length of the valid run ending here - keep the maximum.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(n)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0032-longest-valid-parentheses.c`](./0032-longest-valid-parentheses.c) | ✅ Accepted |
| Python | `0032-longest-valid-parentheses.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0032-longest-valid-parentheses.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
