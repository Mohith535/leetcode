<div align="center">

# 13. Roman to Integer

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/roman-to-integer/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0013-roman-to-integer.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-67.2%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/roman-to-integer/)

![Hash Table](https://img.shields.io/badge/Hash%20Table-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Math](https://img.shields.io/badge/Math-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/roman-to-integer/) &nbsp;·&nbsp; [Read the code](./0013-roman-to-integer.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Roman numerals are represented by seven different symbols: `I`, `V`, `X`, `L`, `C`, `D` and `M`.

```text
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
```

For example, `2` is written as `II` in Roman numeral, just two ones added together. `12` is written as `XII`, which is simply `X + II`. The number `27` is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as `IX`. There are six instances where subtraction is used:

- `I` can be placed before `V` (5) and `X` (10) to make 4 and 9.
- `X` can be placed before `L` (50) and `C` (100) to make 40 and 90.
- `C` can be placed before `D` (500) and `M` (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

### Examples

**Example 1:**

```text
Input: s = "III"
Output: 3
Explanation: III = 3.
```

**Example 2:**

```text
Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
```

**Example 3:**

```text
Input: s = "MCMXCIV"
Output: 1994
Explanation: M = 1000, CM = 900, XC = 90 and IV = 4.
```

### Constraints

- `1 <= s.length <= 15`
- `s` contains only the characters `('I', 'V', 'X', 'L', 'C', 'D', 'M')`.
- It is **guaranteed** that `s` is a valid roman numeral in the range `[1, 3999]`.

---

## My Approach — K MOHITH KANNAN

> **Single pass; subtract a numeral when a larger one follows it.**

1. `switch` maps each numeral to its value.
2. Look ahead one character (`next = 0` at the end of the string).
3. `curr < next` means a subtractive pair such as `IV`, so subtract; otherwise add.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0013-roman-to-integer.c`](./0013-roman-to-integer.c) | ✅ Accepted |
| Python | `0013-roman-to-integer.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0013-roman-to-integer.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
