<div align="center">

# 6. Zigzag Conversion

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/zigzag-conversion/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0006-zigzag-conversion.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-55.2%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/zigzag-conversion/)

![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/zigzag-conversion/) &nbsp;·&nbsp; [Read the code](./0006-zigzag-conversion.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

```text
P   A   H   N
A P L S I I G
Y   I   R
```

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:

```text
string convert(string s, int numRows);
```

### Examples

**Example 1:**

```text
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"
```

**Example 2:**

```text
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I
```

**Example 3:**

```text
Input: s = "A", numRows = 1
Output: "A"
```

### Constraints

- `1 <= s.length <= 1000`
- `s` consists of English letters (lower-case and upper-case), `','` and `'.'`.
- `1 <= numRows <= 1000`

---

## My Approach — K MOHITH KANNAN

> **Compute each character's destination directly - no grid is ever built.**

1. Return `s` untouched when `numRows == 1` or the string cannot even fill one column.
2. One full zigzag cycle spans `2 * numRows - 2` characters.
3. Walk row by row, stepping `cycle` at a time.
4. Middle rows additionally pick up the diagonal character at `i + cycle - 2 * row`.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(n)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0006-zigzag-conversion.c`](./0006-zigzag-conversion.c) | ✅ Accepted |
| Python | `0006-zigzag-conversion.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0006-zigzag-conversion.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
