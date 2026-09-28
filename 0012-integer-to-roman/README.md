<div align="center">

# 12. Integer to Roman

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/integer-to-roman/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0012-integer-to-roman.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-71.7%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/integer-to-roman/)

![Hash Table](https://img.shields.io/badge/Hash%20Table-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Math](https://img.shields.io/badge/Math-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/integer-to-roman/) &nbsp;·&nbsp; [Read the code](./0012-integer-to-roman.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Seven different symbols represent Roman numerals with the following values:

Symbol
Value

I
1

V
5

X
10

L
50

C
100

D
500

M
1000

Roman numerals are formed by appending the conversions of decimal place values from highest to lowest. Converting a decimal place value into a Roman numeral has the following rules:

- If the value does not start with 4 or 9, select the symbol of the maximal value that can be subtracted from the input, append that symbol to the result, subtract its value, and convert the remainder to a Roman numeral.
- If the value starts with 4 or 9 use the **subtractive form** representing one symbol subtracted from the following symbol, for example, 4 is 1 (`I`) less than 5 (`V`): `IV` and 9 is 1 (`I`) less than 10 (`X`): `IX`. Only the following subtractive forms are used: 4 (`IV`), 9 (`IX`), 40 (`XL`), 90 (`XC`), 400 (`CD`) and 900 (`CM`).
- Only powers of 10 (`I`, `X`, `C`, `M`) can be appended consecutively at most 3 times to represent multiples of 10. You cannot append 5 (`V`), 50 (`L`), or 500 (`D`) multiple times. If you need to append a symbol 4 times use the **subtractive form**.

Given an integer, convert it to a Roman numeral.

### Examples

**Example 1:**

**Input:** num = 3749

**Output:** "MMMDCCXLIX"

**Explanation:**

```text
3000 = MMM as 1000 (M) + 1000 (M) + 1000 (M)
 700 = DCC as 500 (D) + 100 (C) + 100 (C)
  40 = XL as 10 (X) less of 50 (L)
   9 = IX as 1 (I) less of 10 (X)
Note: 49 is not 1 (I) less of 50 (L) because the conversion is based on decimal places
```

**Example 2:**

**Input:** num = 58

**Output:** "LVIII"

**Explanation:**

```text
50 = L
 8 = VIII
```

**Example 3:**

**Input:** num = 1994

**Output:** "MCMXCIV"

**Explanation:**

```text
1000 = M
 900 = CM
  90 = XC
   4 = IV
```

### Constraints

- `1 <= num <= 3999`

---

## My Approach — K MOHITH KANNAN

> **Greedy subtraction over a value table that already contains the subtractive pairs.**

1. `values` and `symbols` run largest to smallest and include `CM`, `CD`, `XC`, `XL`, `IX`, `IV`.
2. While `num` is at least the current value, subtract it and append its symbol.
3. Because the awkward pairs are in the table, no special-casing is needed.

### Complexity

| | |
|---|---|
| **Time** | `O(1)` |
| **Space** | `O(1)` |

> [!NOTE]
> Constant because `num <= 3999` bounds both the loop count and the 20-byte output buffer.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0012-integer-to-roman.c`](./0012-integer-to-roman.c) | ✅ Accepted |
| Python | `0012-integer-to-roman.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0012-integer-to-roman.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
