<div align="center">

# 25. Reverse Nodes in k-Group

[![Difficulty](https://img.shields.io/badge/Hard-ff375f?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/reverse-nodes-in-k-group/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0025-reverse-nodes-in-k-group.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-67.3%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/reverse-nodes-in-k-group/)

![Linked List](https://img.shields.io/badge/Linked%20List-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Recursion](https://img.shields.io/badge/Recursion-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/reverse-nodes-in-k-group/) &nbsp;·&nbsp; [Read the code](./0025-reverse-nodes-in-k-group.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given the `head` of a linked list, reverse the nodes of the list `k` at a time, and return *the modified list*.

`k` is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of `k` then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

### Examples

**Example 1:**

![illustration](https://assets.leetcode.com/uploads/2020/10/03/reverse_ex1.jpg)

```text
Input: head = [1,2,3,4,5], k = 2
Output: [2,1,4,3,5]
```

**Example 2:**

![illustration](https://assets.leetcode.com/uploads/2020/10/03/reverse_ex2.jpg)

```text
Input: head = [1,2,3,4,5], k = 3
Output: [3,2,1,4,5]
```

### Constraints

- The number of nodes in the list is `n`.
- `1 <= k <= n <= 5000`
- `0 <= Node.val <= 1000`

### Follow-up

**Follow-up:** Can you solve the problem in `O(1)` extra memory space?

---

## My Approach — K MOHITH KANNAN

> **Walk ahead to confirm a full group of `k` exists, then reverse it in place.**

1. From `group`, step `k` nodes; a `NULL` means the tail is short and must stay as-is.
2. Seed `prev` with `next` (the node after the group) so the reversed run reconnects correctly in one shot.
3. Reverse the `k` links until `cur` reaches `next`.
4. `group->next = end` stitches the reversed block in; `group` moves to `start`, now the group's tail.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(1)` |

> [!NOTE]
> Iterative, so no recursion stack - a full reverse of 5000 nodes stays flat.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0025-reverse-nodes-in-k-group.c`](./0025-reverse-nodes-in-k-group.c) | ✅ Accepted |
| Python | `0025-reverse-nodes-in-k-group.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0025-reverse-nodes-in-k-group.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
