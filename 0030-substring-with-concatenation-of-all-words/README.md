<div align="center">

# 30. Substring with Concatenation of All Words

[![Difficulty](https://img.shields.io/badge/Hard-ff375f?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/substring-with-concatenation-of-all-words/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0030-substring-with-concatenation-of-all-words.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-35.4%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/substring-with-concatenation-of-all-words/)

![Hash Table](https://img.shields.io/badge/Hash%20Table-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![String](https://img.shields.io/badge/String-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Sliding Window](https://img.shields.io/badge/Sliding%20Window-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/substring-with-concatenation-of-all-words/) &nbsp;·&nbsp; [Read the code](./0030-substring-with-concatenation-of-all-words.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

You are given a string `s` and an array of strings `words`. All the strings of `words` are of **the same length**.

A **concatenated string** is a string that exactly contains all the strings of any permutation of `words` concatenated.

- For example, if `words = ["ab","cd","ef"]`, then `"abcdef"`, `"abefcd"`, `"cdabef"`, `"cdefab"`, `"efabcd"`, and `"efcdab"` are all concatenated strings. `"acdbef"` is not a concatenated string because it is not the concatenation of any permutation of `words`.

Return an array of *the starting indices* of all the concatenated substrings in `s`. You can return the answer in **any order**.

### Examples

**Example 1:**

**Input:** s = "barfoothefoobarman", words = ["foo","bar"]

**Output:** [0,9]

**Explanation:**

The substring starting at 0 is `"barfoo"`. It is the concatenation of `["bar","foo"]` which is a permutation of `words`.**The substring starting at 9 is `"foobar"`. It is the concatenation of `["foo","bar"]` which is a permutation of `words`.

Example 2:**

**Input:** s = "wordgoodgoodgoodbestword", words = ["word","good","best","word"]

**Output:** []

**Explanation:**

There is no concatenated substring.

**Example 3:**

**Input:** s = "barfoofoobarthefoobarman", words = ["bar","foo","the"]

**Output:** [6,9,12]

**Explanation:**

The substring starting at 6 is `"foobarthe"`. It is the concatenation of `["foo","bar","the"]`.**The substring starting at 9 is `"barthefoo"`. It is the concatenation of `["bar","the","foo"]`.

The substring starting at 12 is `"thefoobar"`. It is the concatenation of `["the","foo","bar"]`.

### Constraints

- `1 <= s.length <= 10^4`
- `1 <= words.length <= 5000`
- `1 <= words[i].length <= 30`
- `s` and `words[i]` consist of lowercase English letters.

---

## My Approach — K MOHITH KANNAN

> **One sliding window per starting offset, matched on word counts instead of characters.**

1. Words all share a length, so only `wordLen` distinct alignments exist - run a window over each.
2. `need[]` counts required occurrences, keyed by each word's first index via `findWord`.
3. Step the window `wordLen` at a time; an unknown word resets the window entirely.
4. An over-counted word shrinks the window from the left until the count is legal.
5. `count == wordsSize` records a hit, then slides one word forward to keep searching.

### Complexity

| | |
|---|---|
| **Time** | `O(wordLen * n * k)` |
| **Space** | `O(k)` |

> [!NOTE]
> `findWord` is a linear `strcmp` scan rather than a hash map - that is the one deliberate shortcut here. Well inside limits at `n <= 10^4`.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0030-substring-with-concatenation-of-all-words.c`](./0030-substring-with-concatenation-of-all-words.c) | ✅ Accepted |
| Python | `0030-substring-with-concatenation-of-all-words.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0030-substring-with-concatenation-of-all-words.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
