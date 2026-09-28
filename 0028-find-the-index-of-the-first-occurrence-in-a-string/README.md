<div align="center">

# 28. Find the Index of the First Occurrence in a String

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0028-find-the-index-of-the-first-occurrence-in-a-string.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-47.4%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)

![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String Matching](https://img.shields.io/badge/String%20Matching-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Z Algorithm](https://img.shields.io/badge/Z%20Algorithm-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Knuth–Morris–Pratt Algorithm](https://img.shields.io/badge/Knuth–Morris–Pratt%20Algorithm-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Boyer–Moore String-Search Algorithm](https://img.shields.io/badge/Boyer–Moore%20String--Search%20Algorithm-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/) &nbsp;·&nbsp; [Read the code](./0028-find-the-index-of-the-first-occurrence-in-a-string.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.

### Examples

**Example 1:**

```text
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6.
The first occurrence is at index 0, so we return 0.
```

**Example 2:**

```text
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
```

### Constraints

- `1 <= haystack.length, needle.length <= 10^4`
- `haystack` and `needle` consist of only lowercase English characters.

---

## My Approach — K MOHITH KANNAN

> **Slide the needle across the haystack and compare.**

1. Only offsets up to `n - m` can hold a full match.
2. At each offset, compare forward while characters agree.
3. A full `m`-character run returns that offset; nothing found returns -1.

### Complexity

| | |
|---|---|
| **Time** | `O(n * m)` |
| **Space** | `O(1)` |

> [!NOTE]
> KMP would be O(n + m). At `n, m <= 10^4` the direct scan is accepted and is a fraction of the code.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0028-find-the-index-of-the-first-occurrence-in-a-string.c`](./0028-find-the-index-of-the-first-occurrence-in-a-string.c) | ✅ Accepted |
| Python | `0028-find-the-index-of-the-first-occurrence-in-a-string.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0028-find-the-index-of-the-first-occurrence-in-a-string.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
