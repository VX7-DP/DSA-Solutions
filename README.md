# DSA Solutions
 
My solutions to data structures and algorithms problems from various sites (Codeforces, CSES, LeetCode, and others), organized by topic. Written in C++.
 
## Structure
 
```
.
├── arrays/
├── strings/
├── linked-lists/
├── stacks-queues/
├── trees/
├── graphs/
├── heaps/
├── hashing/
├── two-pointers/
├── sliding-window/
├── binary-search/
├── backtracking/
├── greedy/
├── dynamic-programming/
├── tries/
├── math/
└── templates/        # reusable snippets (union-find, segment tree, etc.)
```
 
One problem per file, named in kebab-case (e.g. `two-sum.cpp`). For Codeforces, the problem ID works well as a name (e.g. `1352-g.cpp`).
 
## Conventions
 
- **Language:** C++17 (`g++ -std=c++17`).
- **Naming:** files in kebab-case; folders by topic.
- **Source:** the site is identifiable from the problem link in the header comment (CF / CSES / LeetCode / etc.). For Codeforces, you can add the rating in the header too.
- **Notes:** keep the approach in the header comment, not in a separate file.
- **Commits:** one problem per commit where practical, message like `graphs: add bfs shortest path`.
