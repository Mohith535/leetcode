<div align="center">

# 26. Remove Duplicates from Sorted Array

[![Difficulty](https://img.shields.io/badge/Easy-00b8a3?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)&nbsp;[![Language](https://img.shields.io/badge/C-A8B9CC?style=for-the-badge&logo=c&logoColor=black&labelColor=0d1117)](./0026-remove-duplicates-from-sorted-array.c)&nbsp;[![Acceptance](https://img.shields.io/badge/Acceptance-63.9%25-1f6feb?style=for-the-badge&labelColor=0d1117)](https://leetcode.com/problems/remove-duplicates-from-sorted-array/)

![Array](https://img.shields.io/badge/Array-0d1117?style=flat-square&labelColor=0d1117&color=30363d) ![Two Pointers](https://img.shields.io/badge/Two%20Pointers-0d1117?style=flat-square&labelColor=0d1117&color=30363d)

**Solved by [K MOHITH KANNAN](https://github.com/Mohith535)** &nbsp;·&nbsp; [Open on LeetCode](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) &nbsp;·&nbsp; [Read the code](./0026-remove-duplicates-from-sorted-array.c) &nbsp;·&nbsp; [Back to index](../README.md)

</div>

---

## Problem

Given an integer array `nums` sorted in **non-decreasing order**, remove the duplicates **in-place** such that each unique element appears only **once**. The **relative order** of the elements should be kept the **same**.

Consider the number of *unique elements* in `nums` to be `k​​​​​​​`​​​​​​​. After removing duplicates, return the number of unique elements `k`.

The first `k` elements of `nums` should contain the unique numbers in **sorted order**. The remaining elements beyond index `k - 1` can be ignored.

**Custom Judge:**

The judge will test your solution with the following code:

```text
int[] nums = [...]; // Input array
int[] expectedNums = [...]; // The expected answer with correct length

int k = removeDuplicates(nums); // Calls your implementation

assert k == expectedNums.length;
for (int i = 0; i < k; i++) {
    assert nums[i] == expectedNums[i];
}
```

If all assertions pass, then your solution will be **accepted**.

### Examples

**Example 1:**

```text
Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

**Example 2:**

```text
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4,_,_,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums being 0, 1, 2, 3, and 4 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores).
```

### Constraints

- `1 <= nums.length <= 3 * 10^4`
- `-100 <= nums[i] <= 100`
- `nums` is sorted in **non-decreasing** order.

---

## My Approach — K MOHITH KANNAN

> **Slow/fast write pointer; sortedness means duplicates are adjacent.**

1. `k` is the write cursor, starting at 1 (index 0 is always unique).
2. Scan from index 1; a value differing from its predecessor is copied to `nums[k++]`.
3. `k` is the new length.

### Complexity

| | |
|---|---|
| **Time** | `O(n)` |
| **Space** | `O(1)` |

---

## Files

| Language | File | Status |
|---|---|---|
| C | [`0026-remove-duplicates-from-sorted-array.c`](./0026-remove-duplicates-from-sorted-array.c) | ✅ Accepted |
| Python | `0026-remove-duplicates-from-sorted-array.py` | ⏳ Planned |

```bash
# syntax-check this solution locally
gcc -std=c17 -Wall -Wextra -fsyntax-only -include ../leetcode.h 0026-remove-duplicates-from-sorted-array.c
```

---

<div align="center">

**© K MOHITH KANNAN** &nbsp;·&nbsp; [GitHub](https://github.com/Mohith535) &nbsp;·&nbsp; [Portfolio](https://mohith535.github.io/portfolio/) &nbsp;·&nbsp; [LinkedIn](https://linkedin.com/in/mohith53)

*This solution was reasoned out and written by K MOHITH KANNAN. MIT licensed — credit required.*

</div>
