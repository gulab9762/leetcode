# LeetCode C++ Project Context

This document provides complete context, architectural standards, conventions, and toolchain instructions for AI assistants and contributors working in this repository.

---

## 1. Project Overview & Goals

- **Objective**: Systematically solve LeetCode problems with optimal patterns, high code quality, and interview-ready explanations.
- **Language**: Modern C++ (**C++20**).
- **Core Curriculums**:
  1. **Phase Roadmap**: Located in [`local/problems.md`](./local/problems.md) (300 curated problems across 12 DSA phases).
  2. **LeetCode Explore Cards**: E.g., Top Interview Questions - Easy / Medium / Hard.
- **Progress Tracking**: Managed in [`local/progress.json`](./local/progress.json).

---

## 2. Directory & Problem Conventions

### Folder Naming Standard
Every problem resides in its own root-level directory formatted as:
`NNN-<problem-slug>`
- `NNN`: Zero-padded 3-digit number (e.g., `001-two-sum`, `004-group-anagrams`, `028-find-the-index-of-the-first-occurrence-in-a-string`).
- Use the roadmap sequence index (e.g., `001` through `025` for Phase 1) or the official LeetCode question number (e.g., `028` for LeetCode #28).

### Required Files per Problem Folder

#### 1. `solution.cpp`
Every problem folder must include a self-contained, compilable C++ solution:
```cpp
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    // LeetCode solution method matching official signature
};

int main() {
    Solution sol;
    // Multiple runnable test cases verifying edge cases and sample inputs
    return 0;
}
```

#### 2. `README.md`
Every problem folder must have a detailed documentation file structured as:
- **Title**: `# <Problem Number>. <Problem Title>`
- **Metadata**: Category / Roadmap Phase, LeetCode link, language.
- **Problem Statement**: Input/output format, examples, constraints.
- **Algorithmic Pattern & Intuition**: High-level approach, why this pattern fits, key interview takeaways.
- **Complexity Analysis**: Time and space complexity table with explanations.
- **Walkthrough**: Reference to [`solution.cpp`](./solution.cpp).

---

## 3. Environment & Toolchain

- **OS**: Windows
- **Compiler**: GCC / G++ (`C:\Users\Gulab\w64devkit\bin\g++.exe` with `-std=c++20`).
- **Build / Run Script**: [`run.bat`](./run.bat) compiles and runs target `.cpp` files to `build.exe`.
  - **In Git Bash** (Default terminal):
    ```bash
    ./run.bat "028-find-the-index-of-the-first-occurrence-in-a-string/solution.cpp"
    ```
    *(⚠️ Note: In Git Bash, always run `./run.bat ...`, not `.\run.bat ...` because backslash is an escape character in bash).*
  - **In PowerShell**:
    ```powershell
    .\run.bat "028-find-the-index-of-the-first-occurrence-in-a-string\solution.cpp"
    ```
- **Code Formatter**:
  - Clang-Format extension (`xaver.clang-format`) is configured as the default formatter for `[cpp]` and `[c]`.
  - Format on demand: `Shift + Alt + F` in IDE or CLI:
    ```bash
    clang-format -i "<folder>/solution.cpp"
    ```

---

## 4. Current Repository Status

| Directory | Problem Name | Primary Pattern | Time | Space | Status |
| :--- | :--- | :--- | :--- | :--- | :--- |
| [`001-two-sum/`](./001-two-sum/) | Two Sum (LC #1) | One-pass Hash Map | $O(n)$ | $O(n)$ | Solved |
| [`002-contains-duplicate/`](./002-contains-duplicate/) | Contains Duplicate (LC #217) | Hash Set | $O(n)$ | $O(n)$ | Solved |
| [`003-valid-anagram/`](./003-valid-anagram/) | Valid Anagram (LC #242) | Frequency Array | $O(n)$ | $O(1)$ | Solved |
| [`004-group-anagrams/`](./004-group-anagrams/) | Group Anagrams (LC #49) | Sorted String as Key | $O(n \cdot k \log k)$ | $O(n \cdot k)$ | Solved |
| [`028-find-the-index-of-the-first-occurrence-in-a-string/`](./028-find-the-index-of-the-first-occurrence-in-a-string/) | Find First Occurrence / strStr (LC #28) | Sliding Window / Two Pointers | $O(n \cdot m)$ | $O(1)$ | Solved |

### Next Up in Roadmap:
- **Phase 1 (Arrays & Hashing)**, Problem #5: **Top K Frequent Elements** (LeetCode #347). Target folder: `005-top-k-frequent-elements`.

---

## 5. Instructions for Future AI Assistants

When requested to create or solve a new problem:
1. **Identify Problem**: Confirm title, LeetCode URL, constraints, and pattern.
2. **Determine Folder Name**: `NNN-<kebab-case-title>` (follow roadmap index or LC number).
3. **Generate Files**:
   - `README.md` with complete analysis, intuition, complexity table, and examples.
   - `solution.cpp` with idiomatic C++20, `class Solution`, and test cases in `main()`.
4. **Format & Verify**:
   - Run `clang-format -i "<folder>/solution.cpp"`.
   - Test execution using `./run.bat "<folder>/solution.cpp"`.
5. **Update State**: Update `local/progress.json` if tracked.
