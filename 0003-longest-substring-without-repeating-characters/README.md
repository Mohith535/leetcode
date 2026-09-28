<div align="center">

# 3. Longest Substring Without Repeating Characters

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-substring-without-repeating-characters/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0003-longest-substring-without-repeating-characters.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-39.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

![Hash Table](https://img.shields.io/badge/Hash%20Table-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Sliding Window](https://img.shields.io/badge/Sliding%20Window-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/longest-substring-without-repeating-characters/) &nbsp;·&nbsp; [Read the code](./0003-longest-substring-without-repeating-characters.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a string `s`, find the length of the **longest** **substring** without duplicate characters.

### Examples

**Example 1:**

```text
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
```

**Example 2:**

```text
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
```

**Example 3:**

```text
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
```

### Constraints

- `0 <= s.length <= 10^5`
- `s` consists of English letters, digits, symbols and spaces.

---

## My Approach — K MOHITH KANNAN

> **Sliding window that jumps forward using the last seen index of each character.**

1. `last[128]` holds the most recent index of every ASCII character, initialised to -1.
2. When the current character was last seen at or after `start`, move `start` just past it.
3. Record `last[c] = i`, then stretch `max` with the current window width `i - start + 1`.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(1)` |

> [!NOTE]
> The table is a fixed 128 ints, so space does not grow with the input.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0003-longest-substring-without-repeating-characters.c`](./0003-longest-substring-without-repeating-characters.c) | ✅ Accepted |
| Python | `0003-longest-substring-without-repeating-characters.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0003-longest-substring-without-repeating-characters.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
