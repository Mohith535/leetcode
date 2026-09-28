<div align="center">

# 21. Merge Two Sorted Lists

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/merge-two-sorted-lists/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0021-merge-two-sorted-lists.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-68.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/merge-two-sorted-lists/)

![Linked List](https://img.shields.io/badge/Linked%20List-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Recursion](https://img.shields.io/badge/Recursion-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/merge-two-sorted-lists/) &nbsp;·&nbsp; [Read the code](./0021-merge-two-sorted-lists.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

You are given the heads of two sorted linked lists `list1` and `list2`.

Merge the two lists into one **sorted** list. The list should be made by splicing together the nodes of the first two lists.

Return *the head of the merged linked list*.

### Examples

**Example 1:**

![illustration](https://assets.leetcode.com/uploads/2020/10/03/merge_ex1.jpg)

```text
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
```

**Example 2:**

```text
Input: list1 = [], list2 = []
Output: []
```

**Example 3:**

```text
Input: list1 = [], list2 = [0]
Output: [0]
```

### Constraints

- The number of nodes in both lists is in the range `[0, 50]`.
- `-100 <= Node.val <= 100`
- Both `list1` and `list2` are sorted in **non-decreasing** order.

---

## My Approach — K MOHITH KANNAN

> **Splice the existing nodes together - allocate nothing.**

1. A stack `dummy` gives the tail pointer somewhere to start.
2. Repeatedly attach the smaller head and advance that list.
3. `<=` keeps the merge stable.
4. Whichever list still has nodes is attached wholesale at the end.

### Complexity

| | |
|---|---|
| **Time** | `O(m + n)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0021-merge-two-sorted-lists.c`](./0021-merge-two-sorted-lists.c) | ✅ Accepted |
| Python | `0021-merge-two-sorted-lists.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0021-merge-two-sorted-lists.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
