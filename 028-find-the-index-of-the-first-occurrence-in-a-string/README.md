# 28. Find the Index of the First Occurrence in a String (Implement strStr())

- **Category**: Strings (Top Interview Questions - Easy)
- **LeetCode Link**: [LeetCode - Find the Index of the First Occurrence in a String](https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/)
- **Explore Card Link**: [LeetCode Explore - Strings (885)](https://leetcode.com/explore/interview/card/top-interview-questions-easy/127/strings/885/)
- **Language**: C++

---

## 📝 Problem Statement

Given two strings `needle` and `haystack`, return the index of the first occurrence of `needle` in `haystack`, or `-1` if `needle` is not part of `haystack`.

### Examples

**Example 1:**
```text
Input: haystack = "sadbutsad", needle = "sad"
Output: 0
Explanation: "sad" occurs at index 0 and 6. The first occurrence is at index 0, so we return 0.
```

**Example 2:**
```text
Input: haystack = "leetcode", needle = "leeto"
Output: -1
Explanation: "leeto" did not occur in "leetcode", so we return -1.
```

### Constraints
- `1 <= haystack.length, needle.length <= 10^4`
- `haystack` and `needle` consist of only lowercase English characters.

---

## 🧠 Algorithmic Pattern & Intuition

### Approach 1: Sliding Window / Substring Comparison (Standard)
Slide a window of size `m` (length of `needle`) across `haystack` (length `n`). At each index `i` from `0` to `n - m`, compare substring `haystack[i...i+m-1]` with `needle`.

### Approach 2: Knuth-Morris-Pratt (KMP) Algorithm (Advanced)
Precompute the Longest Prefix Suffix (LPS) array for `needle` in $O(m)$ time, allowing linear $O(n + m)$ matching without backtracking the `haystack` pointer.

---

## ⏱️ Complexity Analysis

| Approach | Time Complexity | Space Complexity | Notes |
| :--- | :--- | :--- | :--- |
| **Sliding Window** | `O((n - m + 1) * m)` | `O(1)` | Simple, optimal for small needles |
| **KMP Algorithm** | `O(n + m)` | `O(m)` | Optimal for large inputs and stringent time limits |

---

## 💻 C++ Solution Walkthrough

Refer to [`solution.cpp`](./solution.cpp) for the solution template and test runner in `main()`.
