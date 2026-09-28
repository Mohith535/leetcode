<div align="center">

# 20. Valid Parentheses

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/valid-parentheses/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0020-valid-parentheses.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-45.0%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/valid-parentheses/)

![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Stack](https://img.shields.io/badge/Stack-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Bracket Sequences](https://img.shields.io/badge/Bracket%20Sequences-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/valid-parentheses/) &nbsp;·&nbsp; [Read the code](./0020-valid-parentheses.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a string `s` containing just the characters `'('`, `')'`, `'{'`, `'}'`, `'['` and `']'`, determine if the input string is valid.

An input string is valid if:

- Open brackets must be closed by the same type of brackets.
- Open brackets must be closed in the correct order.
- Every close bracket has a corresponding open bracket of the same type.

### Examples

**Example 1:**

**Input:** s = "()"

**Output:** true

**Example 2:**

**Input:** s = "()[]{}"

**Output:** true

**Example 3:**

**Input:** s = "(]"

**Output:** false

**Example 4:**

**Input:** s = "([])"

**Output:** true

**Example 5:**

**Input:** s = "([)]"

**Output:** false

### Constraints

- `1 <= s.length <= 10^4`
- `s` consists of parentheses only `'()[]{}'`.

---

## My Approach — K MOHITH KANNAN

> **Push openers on a stack; every closer must match the most recent one.**

1. Allocate a `char` stack of the string's length.
2. Openers are pushed.
3. A closer on an empty stack is an immediate `false`.
4. Otherwise pop and reject any mismatched pair.
5. Valid only if the stack is empty at the end - every path `free`s the buffer first.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(n)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0020-valid-parentheses.c`](./0020-valid-parentheses.c) | ✅ Accepted |
| Python | `0020-valid-parentheses.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0020-valid-parentheses.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
