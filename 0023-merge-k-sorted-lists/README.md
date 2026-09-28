<div align="center">

# 23. Merge k Sorted Lists

[![Difficulty](https://img.shields.io/badge/Hard-ff375f?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/merge-k-sorted-lists/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0023-merge-k-sorted-lists.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-60.6%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/merge-k-sorted-lists/)

![Linked List](https://img.shields.io/badge/Linked%20List-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Divide and Conquer](https://img.shields.io/badge/Divide%20and%20Conquer-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Heap (Priority Queue)](https://img.shields.io/badge/Heap%20(Priority%20Queue)-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Merge Sort](https://img.shields.io/badge/Merge%20Sort-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Tournament Sort](https://img.shields.io/badge/Tournament%20Sort-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/merge-k-sorted-lists/) &nbsp;·&nbsp; [Read the code](./0023-merge-k-sorted-lists.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

You are given an array of `k` linked-lists `lists`, each linked-list is sorted in ascending order.

*Merge all the linked-lists into one sorted linked-list and return it.*

### Examples

**Example 1:**

```text
Input: lists = [[1,4,5],[1,3,4],[2,6]]
Output: [1,1,2,3,4,4,5,6]
Explanation: The linked-lists are:
[
  1->4->5,
  1->3->4,
  2->6
]
merging them into one sorted linked list:
1->1->2->3->4->4->5->6
```

**Example 2:**

```text
Input: lists = []
Output: []
```

**Example 3:**

```text
Input: lists = [[]]
Output: []
```

### Constraints

- `k == lists.length`
- `0 <= k <= 10^4`
- `0 <= lists[i].length <= 500`
- `-10^4 <= lists[i][j] <= 10^4`
- `lists[i]` is sorted in **ascending order**.
- The sum of `lists[i].length` will not exceed `10^4`.

---

## My Approach — K MOHITH KANNAN

> **Bottom-up pairwise merging - merge neighbours, double the stride, repeat.**

1. `merge()` is the standard two-list splice, reused.
2. Pass 1 merges lists 1 apart, pass 2 merges 2 apart, then 4, 8, ...
3. Each pass halves the number of live lists, so there are `log k` passes.
4. `lists[0]` holds the fully merged chain.

### Complexity

| | |
|---|---|
| **Time** | `O(N log k)` |
| **Space** | `O(1)` |

> [!NOTE]
> `N` is the total node count. Matches a heap-based solution's time without needing a heap, and merges in place.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0023-merge-k-sorted-lists.c`](./0023-merge-k-sorted-lists.c) | ✅ Accepted |
| Python | `0023-merge-k-sorted-lists.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0023-merge-k-sorted-lists.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
