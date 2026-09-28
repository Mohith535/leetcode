<div align="center">

# 17. Letter Combinations of a Phone Number

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0017-letter-combinations-of-a-phone-number.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-66.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)

![Hash Table](https://img.shields.io/badge/Hash%20Table-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Backtracking](https://img.shields.io/badge/Backtracking-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/letter-combinations-of-a-phone-number/) &nbsp;·&nbsp; [Read the code](./0017-letter-combinations-of-a-phone-number.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in **any order**.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

![illustration](https://assets.leetcode.com/uploads/2022/03/15/1200px-telephone-keypad2svg.png)

### Examples

**Example 1:**

```text
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
```

**Example 2:**

```text
Input: digits = "2"
Output: ["a","b","c"]
```

### Constraints

- `1 <= digits.length <= 4`
- `digits[i]` is a digit in the range `['2', '9']`.

---

## My Approach — K MOHITH KANNAN

> **Backtracking: choose a letter for the current digit, recurse, repeat.**

1. `map[]` is indexed by the digit itself, so `digits[pos] - '0'` gives its letters.
2. Empty input returns `NULL` with `*returnSize = 0`.
3. At depth `pos == n`, NUL-terminate the buffer and `strcpy` it into a freshly allocated slot.
4. Otherwise write each candidate letter at `cur[pos]` and recurse one level deeper.

### Complexity

| | |
|---|---|
| **Time** | `O(4^n * n)` |
| **Space** | `O(n)` |

> [!NOTE]
> Space is the recursion depth; the 256-pointer result block is the exact worst case, 4^4 for `digits` of length <= 4.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0017-letter-combinations-of-a-phone-number.c`](./0017-letter-combinations-of-a-phone-number.c) | ✅ Accepted |
| Python | `0017-letter-combinations-of-a-phone-number.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0017-letter-combinations-of-a-phone-number.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
