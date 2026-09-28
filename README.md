<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:0d1117,55:1f6feb,100:00b8a3&height=190&section=header&text=LeetCode%20in%20C&fontSize=54&fontColor=ffffff&fontAlignY=34&animation=fadeIn&desc=K%20MOHITH%20KANNAN%20%E2%80%94%20pointers%2C%20not%20libraries&descAlignY=57&descSize=15" width="100%" alt="LeetCode in C" />

<a href="https://github.com/Mohith535">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=19&pause=1200&color=1F6FEB&center=true&vCenter=true&width=760&height=46&lines=34%20problems%20solved%20in%20pure%20C%3B9%20Easy%20%C2%B7%2019%20Medium%20%C2%B7%206%20Hard%3BZero%20warnings%20at%20-O2%20-Wall%20-Wextra%3BEvery%20line%20reasoned%20out%20by%20K%20Mohith%20Kannan" alt="stats" />
</a>

<a href="https://github.com/Mohith535"><img src="https://img.shields.io/badge/Author-K%20Mohith%20Kannan-0d1117?style=for-the-badge&labelColor=0d1117&logo=github&logoColor=white" alt="author" /></a>&nbsp;<img src="https://img.shields.io/badge/Language-C-A8B9CC?style=for-the-badge&labelColor=0d1117&logo=c&logoColor=white" alt="C" />&nbsp;<img src="https://img.shields.io/badge/Solved-34-1f6feb?style=for-the-badge&labelColor=0d1117" alt="solved" />&nbsp;<img src="https://img.shields.io/badge/Warnings-0-00b8a3?style=for-the-badge&labelColor=0d1117" alt="warnings" />&nbsp;<a href="./LICENSE"><img src="https://img.shields.io/badge/License-MIT-6e7681?style=for-the-badge&labelColor=0d1117" alt="MIT" /></a>

<a href="https://mohith535.github.io/portfolio/"><img src="https://img.shields.io/badge/Portfolio-mohith535.github.io-0d1117?style=for-the-badge&labelColor=0d1117&logo=googlechrome&logoColor=white" alt="portfolio" /></a>&nbsp;<a href="https://linkedin.com/in/mohith53"><img src="https://img.shields.io/badge/LinkedIn-K%20Mohith%20Kannan-0A66C2?style=for-the-badge&labelColor=0d1117&logo=linkedin&logoColor=white" alt="linkedin" /></a>

```
            Can Do It.
```

</div>

---

## The point

LeetCode in **C** — no STL, no `HashMap`, no garbage collector to hide behind.
Every stack, every window, every `malloc` is written out by hand, because the
data structure you had to build yourself is the one you actually understand.

Solutions for problems **1–35**, each in its own folder with the problem
statement, the reasoning, and the complexity written down next to the code.

---

## At a glance

| | Solved | Share | |
|:--|--:|--:|:--|
| 🟩 **Easy** | 9 | 26% | `██████░░░░░░░░░░░░░░░░` |
| 🟨 **Medium** | 19 | 56% | `████████████░░░░░░░░░░` |
| 🟥 **Hard** | 6 | 18% | `████░░░░░░░░░░░░░░░░░░` |
| ⬛ **Total** | **34** | 100% | `██████████████████████` |

**26** distinct topics · **34** solution files · **34** in C

---

## Index

| # | Problem | Difficulty | Approach | Time | Space | Code |
|--:|:--|:--|:--|:--|:--|:--|
| 1 | [Two Sum](./0001-two-sum/) | 🟩 Easy | Brute-force every pair until the target shows up. | `O(n^2)` | `O(1)` | [`C`](./0001-two-sum/0001-two-sum.c) |
| 2 | [Add Two Numbers](./0002-add-two-numbers/) | 🟨 Medium | Add digit by digit like grade-school addition, carrying as… | `O(max(m, n))` | `O(max(m, n))` | [`C`](./0002-add-two-numbers/0002-add-two-numbers.c) |
| 3 | [Longest Substring Without Repeating Characters](./0003-longest-substring-without-repeating-characters/) | 🟨 Medium | Sliding window that jumps forward using the last seen index… | `O(n)` | `O(1)` | [`C`](./0003-longest-substring-without-repeating-characters/0003-longest-substring-without-repeating-characters.c) |
| 4 | [Median of Two Sorted Arrays](./0004-median-of-two-sorted-arrays/) | 🟥 Hard | Merge both sorted arrays outright, then read the middle. | `O(m + n)` | `O(m + n)` | [`C`](./0004-median-of-two-sorted-arrays/0004-median-of-two-sorted-arrays.c) |
| 5 | [Longest Palindromic Substring](./0005-longest-palindromic-substring/) | 🟨 Medium | Expand around every possible centre. | `O(n^2)` | `O(1)` | [`C`](./0005-longest-palindromic-substring/0005-longest-palindromic-substring.c) |
| 6 | [Zigzag Conversion](./0006-zigzag-conversion/) | 🟨 Medium | Compute each character's destination directly - no grid is… | `O(n)` | `O(n)` | [`C`](./0006-zigzag-conversion/0006-zigzag-conversion.c) |
| 7 | [Reverse Integer](./0007-reverse-integer/) | 🟨 Medium | Pop digits off the back and push them on, checking for over… | `O(log x)` | `O(1)` | [`C`](./0007-reverse-integer/0007-reverse-integer.c) |
| 8 | [String to Integer (atoi)](./0008-string-to-integer-atoi/) | 🟨 Medium | Walk the string by hand through the four `atoi` phases. | `O(n)` | `O(1)` | [`C`](./0008-string-to-integer-atoi/0008-string-to-integer-atoi.c) |
| 10 | [Regular Expression Matching](./0010-regular-expression-matching/) | 🟥 Hard | Bottom-up DP over prefixes: `dp[i][j]` = does `s[0..i)` mat… | `O(m * n)` | `O(m * n)` | [`C`](./0010-regular-expression-matching/0010-regular-expression-matching.c) |
| 11 | [Container With Most Water](./0011-container-with-most-water/) | 🟨 Medium | Two pointers from both ends, always retreating from the sho… | `O(n)` | `O(1)` | [`C`](./0011-container-with-most-water/0011-container-with-most-water.c) |
| 12 | [Integer to Roman](./0012-integer-to-roman/) | 🟨 Medium | Greedy subtraction over a value table that already contains… | `O(1)` | `O(1)` | [`C`](./0012-integer-to-roman/0012-integer-to-roman.c) |
| 13 | [Roman to Integer](./0013-roman-to-integer/) | 🟩 Easy | Single pass; subtract a numeral when a larger one follows it. | `O(n)` | `O(1)` | [`C`](./0013-roman-to-integer/0013-roman-to-integer.c) |
| 14 | [Longest Common Prefix](./0014-longest-common-prefix/) | 🟩 Easy | Take string 0 as the candidate prefix and shrink it against… | `O(S)` | `O(1)` | [`C`](./0014-longest-common-prefix/0014-longest-common-prefix.c) |
| 15 | [3Sum](./0015-3sum/) | 🟨 Medium | Sort, then for each anchor run a two-pointer sweep for the… | `O(n^2)` | `O(1)` | [`C`](./0015-3sum/0015-3sum.c) |
| 16 | [3Sum Closest](./0016-3sum-closest/) | 🟨 Medium | Same sort-plus-two-pointer sweep, but tracking distance to… | `O(n^2)` | `O(1)` | [`C`](./0016-3sum-closest/0016-3sum-closest.c) |
| 17 | [Letter Combinations of a Phone Number](./0017-letter-combinations-of-a-phone-number/) | 🟨 Medium | Backtracking: choose a letter for the current digit, recurs… | `O(4^n * n)` | `O(n)` | [`C`](./0017-letter-combinations-of-a-phone-number/0017-letter-combinations-of-a-phone-number.c) |
| 18 | [4Sum](./0018-4sum/) | 🟨 Medium | Two nested anchors plus the same two-pointer sweep - 3Sum w… | `O(n^3)` | `O(1)` | [`C`](./0018-4sum/0018-4sum.c) |
| 19 | [Remove Nth Node From End of List](./0019-remove-nth-node-from-end-of-list/) | 🟨 Medium | Two pointers held exactly `n` nodes apart, so one pass find… | `O(L)` | `O(1)` | [`C`](./0019-remove-nth-node-from-end-of-list/0019-remove-nth-node-from-end-of-list.c) |
| 20 | [Valid Parentheses](./0020-valid-parentheses/) | 🟩 Easy | Push openers on a stack; every closer must match the most r… | `O(n)` | `O(n)` | [`C`](./0020-valid-parentheses/0020-valid-parentheses.c) |
| 21 | [Merge Two Sorted Lists](./0021-merge-two-sorted-lists/) | 🟩 Easy | Splice the existing nodes together - allocate nothing. | `O(m + n)` | `O(1)` | [`C`](./0021-merge-two-sorted-lists/0021-merge-two-sorted-lists.c) |
| 22 | [Generate Parentheses](./0022-generate-parentheses/) | 🟨 Medium | Backtracking constrained so only valid strings are ever built. | `O(4^n / sqrt(n))` | `O(n)` | [`C`](./0022-generate-parentheses/0022-generate-parentheses.c) |
| 23 | [Merge k Sorted Lists](./0023-merge-k-sorted-lists/) | 🟥 Hard | Bottom-up pairwise merging - merge neighbours, double the s… | `O(N log k)` | `O(1)` | [`C`](./0023-merge-k-sorted-lists/0023-merge-k-sorted-lists.c) |
| 24 | [Swap Nodes in Pairs](./0024-swap-nodes-in-pairs/) | 🟨 Medium | Rewire pointers two nodes at a time; never touch the values. | `O(n)` | `O(1)` | [`C`](./0024-swap-nodes-in-pairs/0024-swap-nodes-in-pairs.c) |
| 25 | [Reverse Nodes in k-Group](./0025-reverse-nodes-in-k-group/) | 🟥 Hard | Walk ahead to confirm a full group of `k` exists, then reve… | `O(n)` | `O(1)` | [`C`](./0025-reverse-nodes-in-k-group/0025-reverse-nodes-in-k-group.c) |
| 26 | [Remove Duplicates from Sorted Array](./0026-remove-duplicates-from-sorted-array/) | 🟩 Easy | Slow/fast write pointer; sortedness means duplicates are ad… | `O(n)` | `O(1)` | [`C`](./0026-remove-duplicates-from-sorted-array/0026-remove-duplicates-from-sorted-array.c) |
| 27 | [Remove Element](./0027-remove-element/) | 🟩 Easy | Same write-pointer compaction, filtering on value instead o… | `O(n)` | `O(1)` | [`C`](./0027-remove-element/0027-remove-element.c) |
| 28 | [Find the Index of the First Occurrence in a String](./0028-find-the-index-of-the-first-occurrence-in-a-string/) | 🟩 Easy | Slide the needle across the haystack and compare. | `O(n * m)` | `O(1)` | [`C`](./0028-find-the-index-of-the-first-occurrence-in-a-string/0028-find-the-index-of-the-first-occurrence-in-a-string.c) |
| 29 | [Divide Two Integers](./0029-divide-two-integers/) | 🟨 Medium | Long division in binary: double the divisor while it fits… | `O(log^2 n)` | `O(1)` | [`C`](./0029-divide-two-integers/0029-divide-two-integers.c) |
| 30 | [Substring with Concatenation of All Words](./0030-substring-with-concatenation-of-all-words/) | 🟥 Hard | One sliding window per starting offset, matched on word cou… | `O(wordLen * n * k)` | `O(k)` | [`C`](./0030-substring-with-concatenation-of-all-words/0030-substring-with-concatenation-of-all-words.c) |
| 31 | [Next Permutation](./0031-next-permutation/) | 🟨 Medium | Find the rightmost ascent, swap in its next-largest success… | `O(n)` | `O(1)` | [`C`](./0031-next-permutation/0031-next-permutation.c) |
| 32 | [Longest Valid Parentheses](./0032-longest-valid-parentheses/) | 🟥 Hard | Stack of indices with a -1 sentinel, so a valid run's lengt… | `O(n)` | `O(n)` | [`C`](./0032-longest-valid-parentheses/0032-longest-valid-parentheses.c) |
| 33 | [Search in Rotated Sorted Array](./0033-search-in-rotated-sorted-array/) | 🟨 Medium | Binary search, but first work out which half is still sorted. | `O(log n)` | `O(1)` | [`C`](./0033-search-in-rotated-sorted-array/0033-search-in-rotated-sorted-array.c) |
| 34 | [Find First and Last Position of Element in Sorted Array](./0034-find-first-and-last-position-of-element-in-sorted-array/) | 🟨 Medium | Two biased binary searches - one leans left, one leans right. | `O(log n)` | `O(1)` | [`C`](./0034-find-first-and-last-position-of-element-in-sorted-array/0034-find-first-and-last-position-of-element-in-sorted-array.c) |
| 35 | [Search Insert Position](./0035-search-insert-position/) | 🟩 Easy | Plain binary search; the final `left` is the insertion point. | `O(log n)` | `O(1)` | [`C`](./0035-search-insert-position/0035-search-insert-position.c) |

> Every row links to a folder containing the problem statement, the approach,
> and the annotated source. Written and owned by **K MOHITH KANNAN**.

---

## Topic tags

<details>
<summary><b>26 tags across 34 problems</b> — click to expand</summary>

These are LeetCode's own tags for each problem, so they also name techniques
a problem *can* be solved with — `Manacher`, `Trie`, `Knuth–Morris–Pratt`. The
approach column in the index above is what my code actually does.

| Topic | Problems | |
|:--|--:|:--|
| **String** | 14 | [3](./0003-longest-substring-without-repeating-characters/), [5](./0005-longest-palindromic-substring/), [6](./0006-zigzag-conversion/), [8](./0008-string-to-integer-atoi/), [10](./0010-regular-expression-matching/), [12](./0012-integer-to-roman/), [13](./0013-roman-to-integer/), [14](./0014-longest-common-prefix/), [17](./0017-letter-combinations-of-a-phone-number/), [20](./0020-valid-parentheses/), [22](./0022-generate-parentheses/), [28](./0028-find-the-index-of-the-first-occurrence-in-a-string/), [30](./0030-substring-with-concatenation-of-all-words/), [32](./0032-longest-valid-parentheses/) |
| **Array** | 13 | [1](./0001-two-sum/), [4](./0004-median-of-two-sorted-arrays/), [11](./0011-container-with-most-water/), [14](./0014-longest-common-prefix/), [15](./0015-3sum/), [16](./0016-3sum-closest/), [18](./0018-4sum/), [26](./0026-remove-duplicates-from-sorted-array/), [27](./0027-remove-element/), [31](./0031-next-permutation/), [33](./0033-search-in-rotated-sorted-array/), [34](./0034-find-first-and-last-position-of-element-in-sorted-array/), [35](./0035-search-insert-position/) |
| **Two Pointers** | 10 | [5](./0005-longest-palindromic-substring/), [11](./0011-container-with-most-water/), [15](./0015-3sum/), [16](./0016-3sum-closest/), [18](./0018-4sum/), [19](./0019-remove-nth-node-from-end-of-list/), [26](./0026-remove-duplicates-from-sorted-array/), [27](./0027-remove-element/), [28](./0028-find-the-index-of-the-first-occurrence-in-a-string/), [31](./0031-next-permutation/) |
| **Hash Table** | 6 | [1](./0001-two-sum/), [3](./0003-longest-substring-without-repeating-characters/), [12](./0012-integer-to-roman/), [13](./0013-roman-to-integer/), [17](./0017-letter-combinations-of-a-phone-number/), [30](./0030-substring-with-concatenation-of-all-words/) |
| **Linked List** | 6 | [2](./0002-add-two-numbers/), [19](./0019-remove-nth-node-from-end-of-list/), [21](./0021-merge-two-sorted-lists/), [23](./0023-merge-k-sorted-lists/), [24](./0024-swap-nodes-in-pairs/), [25](./0025-reverse-nodes-in-k-group/) |
| **Math** | 5 | [2](./0002-add-two-numbers/), [7](./0007-reverse-integer/), [12](./0012-integer-to-roman/), [13](./0013-roman-to-integer/), [29](./0029-divide-two-integers/) |
| **Recursion** | 5 | [2](./0002-add-two-numbers/), [10](./0010-regular-expression-matching/), [21](./0021-merge-two-sorted-lists/), [24](./0024-swap-nodes-in-pairs/), [25](./0025-reverse-nodes-in-k-group/) |
| **Binary Search** | 4 | [4](./0004-median-of-two-sorted-arrays/), [33](./0033-search-in-rotated-sorted-array/), [34](./0034-find-first-and-last-position-of-element-in-sorted-array/), [35](./0035-search-insert-position/) |
| **Dynamic Programming** | 4 | [5](./0005-longest-palindromic-substring/), [10](./0010-regular-expression-matching/), [22](./0022-generate-parentheses/), [32](./0032-longest-valid-parentheses/) |
| **Sorting** | 3 | [15](./0015-3sum/), [16](./0016-3sum-closest/), [18](./0018-4sum/) |
| **Bracket Sequences** | 3 | [20](./0020-valid-parentheses/), [22](./0022-generate-parentheses/), [32](./0032-longest-valid-parentheses/) |
| **Sliding Window** | 2 | [3](./0003-longest-substring-without-repeating-characters/), [30](./0030-substring-with-concatenation-of-all-words/) |
| **Divide and Conquer** | 2 | [4](./0004-median-of-two-sorted-arrays/), [23](./0023-merge-k-sorted-lists/) |
| **Backtracking** | 2 | [17](./0017-letter-combinations-of-a-phone-number/), [22](./0022-generate-parentheses/) |
| **Stack** | 2 | [20](./0020-valid-parentheses/), [32](./0032-longest-valid-parentheses/) |
| **Manacher** | 1 | [5](./0005-longest-palindromic-substring/) |
| **Greedy** | 1 | [11](./0011-container-with-most-water/) |
| **Trie** | 1 | [14](./0014-longest-common-prefix/) |
| **Heap (Priority Queue)** | 1 | [23](./0023-merge-k-sorted-lists/) |
| **Merge Sort** | 1 | [23](./0023-merge-k-sorted-lists/) |
| **Tournament Sort** | 1 | [23](./0023-merge-k-sorted-lists/) |
| **String Matching** | 1 | [28](./0028-find-the-index-of-the-first-occurrence-in-a-string/) |
| **Z Algorithm** | 1 | [28](./0028-find-the-index-of-the-first-occurrence-in-a-string/) |
| **Knuth–Morris–Pratt Algorithm** | 1 | [28](./0028-find-the-index-of-the-first-occurrence-in-a-string/) |
| **Boyer–Moore String-Search Algorithm** | 1 | [28](./0028-find-the-index-of-the-first-occurrence-in-a-string/) |
| **Bit Manipulation** | 1 | [29](./0029-divide-two-integers/) |

</details>

---

## Layout

```
leetcode/
├─ README.md                  ← generated by tools/sync.py
├─ LICENSE                    ← MIT, in my name
├─ leetcode.h                 ← shim so the files compile locally
├─ tools/sync.py              ← rebuilds this README from the sources
│
├─ 0001-two-sum/
│   ├─ 0001-two-sum.c
│   └─ README.md              ← statement + approach + complexity
├─ 0002-add-two-numbers/
│   ├─ 0002-add-two-numbers.c
│   └─ README.md              ← statement + approach + complexity
│
└─ … 32 more, one folder per problem
```

One folder per problem, so a second language drops in beside the first with
nothing to rename:

```
0001-two-sum/
├─ 0001-two-sum.c
├─ 0001-two-sum.py     ← next
└─ README.md
```

---

## Verify it yourself

Every file pastes straight into the LeetCode editor unchanged — the judge
supplies `struct ListNode`, so the solutions never redeclare it. `leetcode.h`
exists only so the same files can be checked on your own machine:

```bash
# one solution
gcc -std=c17 -Wall -Wextra -fsyntax-only -include leetcode.h 0001-two-sum/0001-two-sum.c

# all of them, warnings treated as the bar to clear
for f in [0-9]*/*.c; do
    gcc -std=c17 -O2 -Wall -Wextra -c -include leetcode.h "$f" -o /dev/null || echo "FAIL $f"
done
```

All 34 files compile clean at `-O2 -Wall -Wextra` — zero errors, zero warnings.

---

## Roadmap

- [x] Problems 1–35 in C — **34 solved**
- [ ] Python solution beside each C file, same folder
- [ ] Keep walking forward from 36

---

<div align="center">

## The author

### K MOHITH KANNAN

**B.Tech CSE (AI & ML) · SRMIST Kattankulathur · Class of 2027**

Chennai, Tamil Nadu, India

*I don't build apps. I build systems.*

<a href="https://github.com/Mohith535"><img src="https://img.shields.io/badge/GitHub-Mohith535-181717?style=for-the-badge&labelColor=0d1117&logo=github&logoColor=white" alt="github" /></a>&nbsp;<a href="https://mohith535.github.io/portfolio/"><img src="https://img.shields.io/badge/Portfolio-Visit-0d1117?style=for-the-badge&labelColor=0d1117&logo=googlechrome&logoColor=white" alt="portfolio" /></a>&nbsp;<a href="https://linkedin.com/in/mohith53"><img src="https://img.shields.io/badge/LinkedIn-Connect-0A66C2?style=for-the-badge&labelColor=0d1117&logo=linkedin&logoColor=white" alt="linkedin" /></a>&nbsp;<a href="mailto:promohith535@gmail.com"><img src="https://img.shields.io/badge/Email-Say%20hi-D14836?style=for-the-badge&labelColor=0d1117&logo=gmail&logoColor=white" alt="email" /></a>

</div>

---

## License & ownership

Every solution in this repository was reasoned out and written by **K MOHITH KANNAN**.
Released under the [MIT License](./LICENSE) — free to read, learn from and reuse,
with attribution retained.

> © K MOHITH KANNAN · [github.com/Mohith535](https://github.com/Mohith535/leetcode)

<div align="center">

<img src="https://capsule-render.vercel.app/api?type=waving&color=0:00b8a3,55:1f6feb,100:0d1117&height=110&section=footer" width="100%" alt="" />

</div>
