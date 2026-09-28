<div align="center">

# 5. Longest Palindromic Substring

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-palindromic-substring/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0005-longest-palindromic-substring.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-38.7%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-palindromic-substring/)

![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Dynamic Programming](https://img.shields.io/badge/Dynamic%20Programming-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Manacher](https://img.shields.io/badge/Manacher-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/longest-palindromic-substring/) &nbsp;·&nbsp; [Read the code](./0005-longest-palindromic-substring.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a string `s`, return *the longest* *palindromic* *substring* in `s`.

### Examples

**Example 1:**

```text
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
```

**Example 2:**

```text
Input: s = "cbbd"
Output: "bb"
```

### Constraints

- `1 <= s.length <= 1000`
- `s` consist of only digits and English letters.

---

## My Approach — K MOHITH KANNAN

> **Expand around every possible centre.**

1. For each index `i`, grow outward from the odd centre `(i, i)` while both ends match.
2. Repeat for the even centre `(i, i + 1)` to catch palindromes of even length.
3. Track `start` and `maxLen` whenever a wider palindrome appears.
4. Copy the winning slice into a fresh buffer and NUL-terminate it.

### Complexity

| | |
|---|---|
| **Time** | `O(n^2)` |
| **Space** | `O(1)` |

> [!NOTE]
> Space excludes the returned string. Manacher's algorithm would be O(n) but is far harder to read.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0005-longest-palindromic-substring.c`](./0005-longest-palindromic-substring.c) | ✅ Accepted |
| Python | `0005-longest-palindromic-substring.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0005-longest-palindromic-substring.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
