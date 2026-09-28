<div align="center">

# 14. Longest Common Prefix

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-common-prefix/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0014-longest-common-prefix.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-48.4%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/longest-common-prefix/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Trie](https://img.shields.io/badge/Trie-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/longest-common-prefix/) &nbsp;·&nbsp; [Read the code](./0014-longest-common-prefix.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

### Examples

**Example 1:**

```text
Input: strs = ["flower","flow","flight"]
Output: "fl"
```

**Example 2:**

```text
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
```

### Constraints

- `1 <= strs.length <= 200`
- `0 <= strs[i].length <= 200`
- `strs[i]` consists of only lowercase English letters if it is non-empty.

---

## My Approach — K MOHITH KANNAN

> **Take string 0 as the candidate prefix and shrink it against every other string.**

1. Start with `len = strlen(strs[0])`.
2. For each later string, walk forward while characters agree and the index is under `len`.
3. Truncate `len` to that match length; bail out with an empty string as soon as it hits 0.
4. Copy the surviving prefix into a fresh buffer.

### Complexity

| | |
|---|---|
| **Time** | `O(S)` |
| **Space** | `O(1)` |

> [!NOTE]
> `S` is the total number of characters across all strings; space excludes the returned string.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0014-longest-common-prefix.c`](./0014-longest-common-prefix.c) | ✅ Accepted |
| Python | `0014-longest-common-prefix.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0014-longest-common-prefix.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
