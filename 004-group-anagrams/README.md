# 4. Group Anagrams

- **Roadmap Phase**: Phase 1 — Arrays & Hashing — 25
- **LeetCode Link**: [LeetCode - Group Anagrams](https://leetcode.com/problems/group-anagrams/)
- **Language**: C++

---

## 🧠 Algorithmic Pattern & Intuition

### Approach: Sorted String as Hash Map Key

Sort each word to create a canonical key. Group all words with identical canonical keys together in a hash map.

### 🎯 Pattern Recognition & Interview Takeaway
- **When to use this pattern**: Look for problems asking for lookups, matching complements, frequency counting, or window constraints.
- **Key Insight**: Trading space for linear time complexity avoids expensive nested loops ($O(n^2) \rightarrow O(n)$).

---

## ⏱️ Complexity Analysis

| Metric | Complexity | Explanation |
| :--- | :--- | :--- |
| **Time Complexity** | `O(n * k log k)` | Linear scan processing each element in constant amortized time. |
| **Space Complexity** | `O(n * k)` | Auxiliary storage required for lookups or state tracking. |

---

## 💻 C++ Solution Walkthrough

Refer to [`solution.cpp`](./solution.cpp) for the full runnable code with sample test cases in `main()`.
