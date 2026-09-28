<div align="center">

# 24. Swap Nodes in Pairs

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/swap-nodes-in-pairs/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0024-swap-nodes-in-pairs.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-70.3%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/swap-nodes-in-pairs/)

![Linked List](https://img.shields.io/badge/Linked%20List-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Recursion](https://img.shields.io/badge/Recursion-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/swap-nodes-in-pairs/) &nbsp;·&nbsp; [Read the code](./0024-swap-nodes-in-pairs.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

### Examples

**Example 1:**

**Input:** head = [1,2,3,4]

**Output:** [2,1,4,3]

**Explanation:**

![illustration](https://assets.leetcode.com/uploads/2020/10/03/swap_ex1.jpg)

**Example 2:**

**Input:** head = []

**Output:** []

**Example 3:**

**Input:** head = [1]

**Output:** [1]

**Example 4:**

**Input:** head = [1,2,3]

**Output:** [2,1,3]

### Constraints

- The number of nodes in the list is in the range `[0, 100]`.
- `0 <= Node.val <= 100`

---

## My Approach — K MOHITH KANNAN

> **Rewire pointers two nodes at a time; never touch the values.**

1. A stack `dummy` in front of the head keeps the first swap uniform.
2. Grab `a = cur->next` and `b = a->next`.
3. Relink `a->next = b->next`, `b->next = a`, `cur->next = b`.
4. Advance `cur` to `a`, which is now the tail of the swapped pair.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0024-swap-nodes-in-pairs.c`](./0024-swap-nodes-in-pairs.c) | ✅ Accepted |
| Python | `0024-swap-nodes-in-pairs.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0024-swap-nodes-in-pairs.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
