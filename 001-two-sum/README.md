# 1. Two Sum

- **Roadmap Phase**: Phase 1 — Arrays & Hashing — 25
- **LeetCode Link**: [LeetCode - Two Sum](https://leetcode.com/problems/two-sum/)
- **Language**: C++

---

## Approach: One-pass Hash Map

Iterate through the array while storing each number and its index in a hash map. For each element, check if the complement (target - num) already exists in the map.

### Complexity Analysis
- **Time Complexity**: `O(n)`
- **Space Complexity**: `O(n)`

---

## C++ Solution
Refer to [`solution.cpp`](./solution.cpp) for complete implementation and test cases.
