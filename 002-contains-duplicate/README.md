# 2. Contains Duplicate

- **Roadmap Phase**: Phase 1 — Arrays & Hashing — 25
- **LeetCode Link**: [LeetCode - Contains Duplicate](https://leetcode.com/problems/contains-duplicate/)
- **Language**: C++

---

## 🧠 Algorithmic Pattern & Intuition

### Approach: Hash Set Lookup

Traverse the array and insert each element into an unordered_set. If an element is already present in the set, a duplicate has been found.

### 🎯 Pattern Recognition & Interview Takeaway
- **When to use this pattern**: Look for problems asking for lookups, matching complements, frequency counting, or window constraints.
- **Key Insight**: Trading space for linear time complexity avoids expensive nested loops ($O(n^2) \rightarrow O(n)$).

---

## ⏱️ Complexity Analysis

| Metric | Complexity | Explanation |
| :--- | :--- | :--- |
| **Time Complexity** | `O(n)` | Linear scan processing each element in constant amortized time. |
| **Space Complexity** | `O(n)` | Auxiliary storage required for lookups or state tracking. |

---

## 💻 C++ Solution Walkthrough

Refer to [`solution.cpp`](./solution.cpp) for the full runnable code with sample test cases in `main()`.
