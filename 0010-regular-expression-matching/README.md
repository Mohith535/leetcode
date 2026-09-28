<div align="center">

# 10. Regular Expression Matching

[![Difficulty](https://img.shields.io/badge/Hard-ff375f?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/regular-expression-matching/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0010-regular-expression-matching.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-31.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/regular-expression-matching/)

![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Dynamic Programming](https://img.shields.io/badge/Dynamic%20Programming-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Recursion](https://img.shields.io/badge/Recursion-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/regular-expression-matching/) &nbsp;·&nbsp; [Read the code](./0010-regular-expression-matching.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given an input string `s` and a pattern `p`, implement regular expression matching with support for `'.'` and `'*'` where:

- `'.'` Matches any single character.​​​​
- `'*'` Matches zero or more of the preceding element.

Return a boolean indicating whether the matching covers the entire input string (not partial).

### Examples

**Example 1:**

```text
Input: s = "aa", p = "a"
Output: false
Explanation: "a" does not match the entire string "aa".
```

**Example 2:**

```text
Input: s = "aa", p = "a*"
Output: true
Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
```

**Example 3:**

```text
Input: s = "ab", p = ".*"
Output: true
Explanation: ".*" means "zero or more (*) of any character (.)".
```

### Constraints

- `1 <= s.length <= 20`
- `1 <= p.length <= 20`
- `s` contains only lowercase English letters.
- `p` contains only lowercase English letters, `'.'`, and `'*'`.
- It is guaranteed for each appearance of the character `'*'`, there will be a previous valid character to match.

---

## My Approach — K MOHITH KANNAN

> **Bottom-up DP over prefixes: `dp[i][j]` = does `s[0..i)` match `p[0..j)`?**

1. `dp[0][0] = true`; an empty string matches an empty pattern.
2. Seed row 0: a `*` can erase the token before it, so `dp[0][j] = dp[0][j-2]`.
3. A literal or `.` match consumes one character from each: `dp[i][j] = dp[i-1][j-1]`.
4. A `*` either drops its token (`dp[i][j-2]`) or consumes one more character (`dp[i-1][j]`) when the token matches `s[i-1]`.

### Complexity

| | |
|---|---|
| **Time** | `O(m * n)` |
| **Space** | `O(m * n)` |

> [!NOTE]
> The table is a fixed `bool dp[21][21]`, sized straight from the problem's `<= 20` constraint.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0010-regular-expression-matching.c`](./0010-regular-expression-matching.c) | ✅ Accepted |
| Python | `0010-regular-expression-matching.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0010-regular-expression-matching.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
