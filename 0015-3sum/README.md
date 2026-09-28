<div align="center">

# 15. 3Sum

[![Difficulty](https://img.shields.io/badge/Medium-ffb800?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/3sum/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0015-3sum.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-40.0%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/3sum/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Sorting](https://img.shields.io/badge/Sorting-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/3sum/) &nbsp;·&nbsp; [Read the code](./0015-3sum.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

### Examples

**Example 1:**

```text
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation:
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.
```

**Example 2:**

```text
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.
```

**Example 3:**

```text
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.
```

### Constraints

- `3 <= nums.length <= 3000`
- `-10^5 <= nums[i] <= 10^5`

---

## My Approach — K MOHITH KANNAN

> **Sort, then for each anchor run a two-pointer sweep for the remaining pair.**

1. `qsort` the array so duplicates sit together and two pointers become valid.
2. Fix `nums[i]`, skipping it when it repeats the previous anchor.
3. Converge `left` / `right`: sum too small moves `left` up, too large moves `right` down.
4. On a hit, record the triple and skip *both* pointers past their duplicate runs.
5. The result array starts at 1000 rows and `realloc`s by doubling if needed.

### Complexity

| | |
|---|---|
| **Time** | `O(n^2)` |
| **Space** | `O(1)` |

> [!NOTE]
> `long` accumulates the sum so three extreme values cannot overflow `int`. Space excludes the returned triples.

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0015-3sum.c`](./0015-3sum.c) | ✅ Accepted |
| Python | `0015-3sum.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0015-3sum.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
