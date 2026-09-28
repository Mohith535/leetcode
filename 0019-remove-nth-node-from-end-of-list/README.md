<div align="center">

# 19. Remove Nth Node From End of List

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0019-remove-nth-node-from-end-of-list.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-52.7%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)

![Linked List](https://img.shields.io/badge/Linked%20List-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://leetcode.com/u/Mohith535/)** [![LeetCode](https://img.shields.io/badge/@Mohith535-FFA116?style=flat-square&logo=leetcode&logoColor=white&labelColor=0d1117)](https://leetcode.com/u/Mohith535/)

[Open the problem](https://leetcode.com/problems/remove-nth-node-from-end-of-list/) &nbsp;·&nbsp; [Read the code](./0019-remove-nth-node-from-end-of-list.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given the `head` of a linked list, remove the `n^th` node from the end of the list and return its head.

### Examples

**Example 1:**

![illustration](https://assets.leetcode.com/uploads/2020/10/03/remove_ex1.jpg)

```text
Input: head = [1,2,3,4,5], n = 2
Output: [1,2,3,5]
```

**Example 2:**

```text
Input: head = [1], n = 1
Output: []
```

**Example 3:**

```text
Input: head = [1,2], n = 1
Output: [1]
```

### Constraints

- The number of nodes in the list is `sz`.
- `1 <= sz <= 30`
- `0 <= Node.val <= 100`
- `1 <= n <= sz`

### Follow-up

**Follow up:** Could you do this in one pass?

---

## My Approach — K MOHITH KANNAN

> **Two pointers held exactly `n` nodes apart, so one pass finds the target.**

1. A stack-allocated `dummy` node removes the special case of deleting the head.
2. Advance `fast` by `n` nodes.
3. Walk both until `fast->next` is `NULL`; `slow` now sits just before the node to drop.
4. Unlink it, `free` it, and return `dummy.next`.

### Complexity

| | |
|---|---|
| **Time** | `O(L)` |
| **Space** | `O(1)` |

> [!NOTE]
> `dummy` lives on the stack, so there is nothing extra to free.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0019-remove-nth-node-from-end-of-list.c`](./0019-remove-nth-node-from-end-of-list.c) | ✅ Accepted |
| Python | `0019-remove-nth-node-from-end-of-list.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0019-remove-nth-node-from-end-of-list.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [LeetCode](https://leetcode.com/u/Mohith535/) &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*Accepted on LeetCode as [@Mohith535](https://leetcode.com/u/Mohith535/), reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
