<div align="center">

# 2. Add Two Numbers

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/add-two-numbers/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0002-add-two-numbers.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-49.4%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/add-two-numbers/)

![Linked List](https://img.shields.io/badge/Linked%20List-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Math](https://img.shields.io/badge/Math-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Recursion](https://img.shields.io/badge/Recursion-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/add-two-numbers/) &nbsp;·&nbsp; [Read the code](./0002-add-two-numbers.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

You are given two **non-empty** linked lists representing two non-negative integers. The digits are stored in **reverse order**, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

### Examples

**Example 1:**

![illustration](https://assets.leetcode.com/uploads/2020/10/02/addtwonumber1.jpg)

```text
Input: l1 = [2,4,3], l2 = [5,6,4]
Output: [7,0,8]
Explanation: 342 + 465 = 807.
```

**Example 2:**

```text
Input: l1 = [0], l2 = [0]
Output: [0]
```

**Example 3:**

```text
Input: l1 = [9,9,9,9,9,9,9], l2 = [9,9,9,9]
Output: [8,9,9,9,0,0,0,1]
```

### Constraints

- The number of nodes in each linked list is in the range `[1, 100]`.
- `0 <= Node.val <= 9`
- It is guaranteed that the list represents a number that does not have leading zeros.

---

## My Approach — K MOHITH KANNAN

> **Add digit by digit like grade-school addition, carrying as you go.**

1. Loop while either list has nodes **or** a carry is still pending.
2. Sum the two available digits plus the carry; the new node stores `sum % 10`.
3. `carry = sum / 10` rolls into the next iteration.
4. `head` is captured on the first node; `temp` tracks the tail for O(1) appends.

### Complexity

| | |
|---|---|
| **Time** | `O(max(m, n))` |
| **Space** | `O(max(m, n))` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0002-add-two-numbers.c`](./0002-add-two-numbers.c) | ✅ Accepted |
| Python | `0002-add-two-numbers.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0002-add-two-numbers.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
