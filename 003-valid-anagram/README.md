# 3. Valid Anagram

- **Roadmap Phase**: Phase 1 — Arrays & Hashing — 25
- **LeetCode Link**: [LeetCode - Valid Anagram](https://leetcode.com/problems/valid-anagram/)
- **Language**: C++

---

## 🧠 Algorithmic Pattern & Intuition

### Approach: Character Frequency Array

Use a fixed-size frequency table of 26 integers. Count characters from the first string and decrement using the second string. All counts must equal zero.

### 🎯 Pattern Recognition & Interview Takeaway
- **When to use this pattern**: Look for problems asking for lookups, matching complements, frequency counting, or window constraints.
- **Key Insight**: Trading space for linear time complexity avoids expensive nested loops ($O(n^2) \rightarrow O(n)$).

---

## ⏱️ Complexity Analysis

| Metric | Complexity | Explanation |
| :--- | :--- | :--- |
| **Time Complexity** | `O(n)` | Linear scan processing each element in constant amortized time. |
| **Space Complexity** | `O(1) (fixed 26 letters)` | Auxiliary storage required for lookups or state tracking. |

---

## 💻 C++ Solution Walkthrough

Refer to [`solution.cpp`](./solution.cpp) for the full runnable code with sample test cases in `main()`.
