# AI Assistant Instructions & Workspace Rules

This repository is dedicated to solving LeetCode problems in modern C++ (C++20).
All AI agents must follow the conventions defined in [`CONTEXT.md`](./CONTEXT.md) and [`local/problems.md`](./local/problems.md).

## Core Rules for AI Assistants

1. **Problem Folder Structure**:
   - Each problem must live in `NNN-<problem-slug>/` (3-digit zero-padded number + problem slug).
   - Each problem directory must contain:
     - `solution.cpp`: Self-contained C++20 code with `class Solution`, proper headers, and runnable test cases in `main()`.
     - `README.md`: Problem statement, constraints, pattern explanation, time/space complexity table, and code link.

2. **C++ Coding & Formatting Standards**:
   - Standard: C++20.
   - Use standard includes (`<iostream>`, `<vector>`, `<string>`, `<unordered_map>`, etc.).
   - Follow clean, readable code formatting compliant with `clang-format`.
   - Always run `clang-format -i "<folder>/solution.cpp"` after generating or modifying C++ files.

3. **Compiling & Running**:
   - Always test solutions using `run.bat`:
     - In Git Bash: `./run.bat "<folder>/solution.cpp"`
     - In PowerShell: `.\run.bat "<folder>\solution.cpp"`
   - Ensure the code compiles cleanly with 0 errors and test assertions pass.

4. **Roadmap & Progress**:
   - Check [`local/problems.md`](./local/problems.md) for the 300-problem roadmap.
   - Track completed problems in [`local/progress.json`](./local/progress.json).
