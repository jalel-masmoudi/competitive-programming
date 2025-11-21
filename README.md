# Competitive Programming Solutions 🏆

High-quality, optimized solutions to challenging coding problems from **LeetCode**, **HackerRank**, **Codeforces**, and more. Each solution includes detailed explanations, complexity analysis, and alternative approaches.

---

## 📊 Statistics

- **Total Problems:** 50+
- **Difficulty Distribution:**
  - 🟢 Easy: 15+
  - 🟡 Medium: 25+
  - 🔴 Hard: 10+
- **Languages:** C++, Python
- **Topics Covered:** 10+

---

## 🗂️ Problem Categories

### 🔢 Arrays & Strings

| Problem | Difficulty | Time | Space | Topic |
|---------|-----------|------|-------|-------|
| [Two Sum](solutions/arrays/two_sum.cpp) | 🟢 Easy | O(n) | O(n) | Hash Map |
| [Contains Duplicate](solutions/arrays/contains_duplicate.py) | 🟢 Easy | O(n) | O(n) | Hash Set |
| [Valid Anagram](solutions/arrays/valid_anagram.cpp) | 🟢 Easy | O(n) | O(1) | Sorting |
| [Maximum Subarray](solutions/arrays/max_subarray.py) | 🟡 Medium | O(n) | O(1) | Kadane's Algorithm |
| [Best Time Stock](solutions/arrays/best_time_stock.cpp) | 🟢 Easy | O(n) | O(1) | Single Pass |
| [Product Except Self](solutions/arrays/product_except_self.py) | 🟡 Medium | O(n) | O(n) | Prefix/Suffix |
| [Longest Substring](solutions/strings/longest_substring.cpp) | 🟡 Medium | O(n) | O(n) | Sliding Window |
| [3Sum](solutions/arrays/3sum.py) | 🟡 Medium | O(n²) | O(1) | Two Pointers |
| [Trapping Rain Water](solutions/arrays/trapping_rain.cpp) | 🔴 Hard | O(n) | O(1) | Two Pointers |

### 🌳 Trees & Graphs

| Problem | Difficulty | Time | Space | Topic |
|---------|-----------|------|-------|-------|
| [Inorder Traversal](solutions/trees/inorder.py) | 🟢 Easy | O(n) | O(h) | DFS |
| [Level Order](solutions/trees/level_order.cpp) | 🟢 Easy | O(n) | O(w) | BFS |
| [Lowest Common Ancestor](solutions/trees/lca.py) | 🟡 Medium | O(n) | O(h) | Tree DP |
| [Number of Islands](solutions/graphs/num_islands.cpp) | 🟡 Medium | O(m*n) | O(m*n) | DFS/BFS |
| [Course Schedule](solutions/graphs/course_schedule.py) | 🟡 Medium | O(V+E) | O(V) | Topological Sort |
| [Word Ladder](solutions/graphs/word_ladder.cpp) | 🟡 Medium | O(w*L) | O(w*L) | BFS |
| [Serialize Tree](solutions/trees/serialize.py) | 🔴 Hard | O(n) | O(n) | Tree Traversal |

### 💪 Dynamic Programming

| Problem | Difficulty | Time | Space | Topic |
|---------|-----------|------|-------|-------|
| [Climbing Stairs](solutions/dp/climbing_stairs.py) | 🟢 Easy | O(n) | O(n) | Basic DP |
| [House Robber](solutions/dp/house_robber.cpp) | 🟢 Easy | O(n) | O(1) | Space Optimization |
| [Coin Change](solutions/dp/coin_change.py) | 🟡 Medium | O(n*c) | O(n) | Min Coins |
| [Longest Increasing Subseq.](solutions/dp/lis.cpp) | 🟡 Medium | O(n log n) | O(n) | Binary Search |
| [Edit Distance](solutions/dp/edit_distance.py) | 🟡 Medium | O(m*n) | O(m*n) | String DP |
| [Regular Expression](solutions/dp/regex_match.cpp) | 🔴 Hard | O(m*n) | O(m*n) | String Matching |
| [Burst Balloons](solutions/dp/burst_balloons.py) | 🔴 Hard | O(n³) | O(n²) | Interval DP |

### 🔗 Linked Lists

| Problem | Difficulty | Time | Space | Topic |
|---------|-----------|------|-------|-------|
| [Reverse Linked List](solutions/linked_list/reverse.cpp) | 🟢 Easy | O(n) | O(1) | Two Pointers |
| [Merge Two Lists](solutions/linked_list/merge_two.py) | 🟢 Easy | O(n+m) | O(1) | Merging |
| [Detect Cycle](solutions/linked_list/detect_cycle.cpp) | 🟢 Easy | O(n) | O(1) | Floyd's Algorithm |
| [Reverse K Group](solutions/linked_list/reverse_k_group.py) | 🔴 Hard | O(n) | O(1) | Recursion |

### 🧠 Bit Manipulation

| Problem | Difficulty | Time | Space | Topic |
|---------|-----------|------|-------|-------|
| [Single Number](solutions/bit/single_number.cpp) | 🟢 Easy | O(n) | O(1) | XOR |
| [Power of Two](solutions/bit/power_of_two.py) | 🟢 Easy | O(1) | O(1) | Bit Tricks |
| [Bitwise AND Range](solutions/bit/bitwise_and_range.cpp) | 🟡 Medium | O(log n) | O(1) | Bit Shifting |

### 🏛️ Other Categories

- **Sorting** (10+ problems)
- **Searching** (8+ problems)
- **Math** (7+ problems)
- **Greedy** (5+ problems)
- **Stack & Queue** (8+ problems)

---

## 📁 Repository Structure

```
competitive-programming/
├── solutions/
│   ├── arrays/
│   │   ├── two_sum.cpp
│   │   ├── max_subarray.py
│   │   └── product_except_self.cpp
│   ├── strings/
│   │   ├── longest_substring.cpp
│   │   └── longest_palindrome.py
│   ├── trees/
│   │   ├── inorder_traversal.cpp
│   │   ├── lca.py
│   │   └── serialize.cpp
│   ├── graphs/
│   │   ├── bfs.py
│   │   ├── dfs.cpp
│   │   └── topological_sort.py
│   ├── dp/
│   │   ├── fibonacci.cpp
│   │   ├── knapsack.py
│   │   └── lis.cpp
│   ├── linked_list/
│   │   └── reverse.cpp
│   ├── bit_manipulation/
│   │   └── single_number.py
│   ├── sorting/
│   │   └── merge_intervals.cpp
│   └── math/
│       └── median_sorted_arrays.py
├── notes/
│   ├── algorithm_techniques.md
│   ├── complexity_cheatsheet.md
│   └── common_patterns.md
├── tests/
│   └── test_solutions.py
└── README.md
```

---

## 🚀 Quick Start

### Clone & Setup
```bash
git clone https://github.com/jalel-masmoudi/competitive-programming.git
cd competitive-programming
```

### Run Python Solution
```bash
# Run specific solution
python3 solutions/arrays/two_sum.py

# Run with test cases
python3 -m pytest solutions/arrays/test_two_sum.py
```

### Compile & Run C++
```bash
# Compile
g++ -O2 -std=c++17 -o solution solutions/arrays/two_sum.cpp

# Run
./solution
```

---

## 📚 Solution Template

Each solution follows this structure:

```
## Problem: [Name]

**Difficulty:** 🟡 Medium  
**Source:** LeetCode #123 / HackerRank  
**Topics:** Arrays, Two Pointers  
**Date Solved:** 2025-11-15

### Problem Description
[Clear description of what to solve]

### Approach 1: Brute Force
- **Time:** O(n²)
- **Space:** O(1)
- **Idea:** Explanation...

### Approach 2: Optimized (RECOMMENDED)
- **Time:** O(n)
- **Space:** O(n)
- **Idea:** Explanation...

### Code
[Python/C++ Implementation]

### Complexity Analysis
- **Time:** O(n) - Why? [Explanation]
- **Space:** O(n) - Why? [Explanation]

### Edge Cases
- [ ] Empty input
- [ ] Single element
- [ ] All same elements
- [ ] Negative numbers

### Testing
[Test cases with expected outputs]

### Key Insights
- 💡 Important realization 1
- 💡 Important realization 2
- 💡 Common pitfall to avoid

### Related Problems
- Similar Problem A
- Similar Problem B
```

---

## 💡 Learning Resources Inside

### Notes Directory
- **algorithm_techniques.md** - Common patterns and techniques
- **complexity_cheatsheet.md** - Big O reference
- **common_patterns.md** - Recurring problem patterns
- **data_structures_review.md** - DS implementation review

### Key Techniques

**Two Pointers**
```cpp
// Used for sorted arrays, linked lists, strings
// Often achieves O(n) time with O(1) space
```

**Sliding Window**
```
// For substring/subarray problems
// Maintain window [left, right] and adjust
```

**Divide & Conquer**
```
// Merge Sort, Quick Sort, Binary Search
// Reduces problem to smaller subproblems
```

**Dynamic Programming**
```
// Overlapping subproblems + Optimal substructure
// Memoize or use tabulation
```

**Graph Algorithms**
```
// BFS for shortest path (unweighted)
// DFS for connectivity/cycles
// Dijkstra for shortest path (weighted)
```

---

## 🎯 Difficulty Progression

**Week 1-2: Easy Problems**
- Focus on fundamentals
- Understand problem types
- Get comfortable with syntax

**Week 3-4: Medium Problems**
- Apply multiple techniques
- Practice optimization
- Improve time complexity

**Week 5-6: Hard Problems**
- Combine techniques
- Advanced algorithms
- System design thinking

---

## 📊 Problem Statistics

```
Language Distribution:
  C++:     65%
  Python:  35%

Category Distribution:
  Arrays & Strings:  25%
  Trees & Graphs:    30%
  DP:                20%
  Linked Lists:      10%
  Other:             15%

Difficulty:
  Easy:   30%
  Medium: 50%
  Hard:   20%
```

---

## 🧪 Testing

```bash
# Test all solutions
python3 -m pytest tests/ -v

# Test specific category
python3 -m pytest tests/test_arrays.py

# Generate performance report
python3 scripts/benchmark.py

# Test with custom input
python3 solutions/arrays/two_sum.py
```

---

## 💻 My Best Solutions

⭐ **Top 5 Most Elegant:**
1. Single Number (Bit Manipulation) - Simple XOR trick
2. Trapping Rain Water - Two pointer perfection
3. Merge K Lists - Heap-based solution
4. LIS with Binary Search - O(n log n) beauty
5. Regular Expression Matching - DP masterpiece

---

## 🤝 Contributing

Found a bug or better solution? Contributions welcome!

1. Fork repository
2. Create feature branch
3. Add your solution with:
   - Clear explanation
   - Multiple approaches
   - Complexity analysis
   - Test cases
4. Submit pull request

---

## 📈 Progress Tracking

| Milestone | Status | Date |
|-----------|--------|------|
| 10 problems | ✅ | Sept 2024 |
| 25 problems | ✅ | Oct 2024 |
| 50 problems | ✅ | Nov 2024 |
| 100 problems | 🟡 In Progress | Target: Jan 2025 |

---

## 🎓 Study Tips

✅ **DO:**
- Understand BEFORE coding
- Practice on paper first
- Code multiple approaches
- Test edge cases thoroughly
- Explain your solution aloud
- Review others' solutions
- Focus on patterns

❌ **DON'T:**
- Memorize solutions
- Code without planning
- Skip edge cases
- Give up too quickly
- Copy without understanding
- Ignore complexity analysis

---

## 📄 License

MIT License - Learn, practice, and grow!

---

## 👤 Author

**Jalel Masmoudi**  
Computer Science Student | Competitive Programmer  
📧 Contact: m.j.masmoudi1@gmail.com

---

*Last Updated: November 2025*  
*"Every problem solved is a lesson learned."*

⭐ If these solutions help you, please star the repository!
