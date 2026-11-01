
# 🚀 Day 71 - Average of Levels in Binary Tree

![Day](https://img.shields.io/badge/365%20Days%20of%20Code-Day%2071-blue)
![LeetCode](https://img.shields.io/badge/LeetCode-637-orange)
![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)
![Languages](https://img.shields.io/badge/Languages-C++%20%7C%20Python-green)

## 📌 Problem Statement

Given the root of a binary tree, return an array containing the average value of nodes at each level.

The average should be calculated separately for every level of the binary tree.

## 💡 Example

**Input:**
```text
        3
       / \
      9   20
         /  \
        15   7
```

**Output:**
```text
[3.00000, 14.50000, 11.00000]
```

**Explanation:**

- Level 1: 3 / 1 = 3.0
- Level 2: (9 + 20) / 2 = 14.5
- Level 3: (15 + 7) / 2 = 11.0

## 🧠 Approach: Breadth First Search (BFS)

This problem is solved using Level Order Traversal with a Queue.

### Algorithm

1. Create a queue and insert the root node.
2. Find the number of nodes present at the current level.
3. Traverse all nodes at that level.
4. Calculate the sum of their values.
5. Insert their left and right children into the queue.
6. Calculate the average using `sum / number_of_nodes`.
7. Store the average in the result array.
8. Repeat until the queue becomes empty.

## 💻 Languages Used

### 1. C++
- Queue (STL)
- Vector
- Binary Tree
- BFS Traversal

File: `Day71.cpp`

### 2. Python
- Collections (deque)
- List
- Binary Tree
- BFS Traversal

File: `Day71.py`

## 📊 Complexity Analysis

| Complexity | Value | Explanation |
|---|---|---|
| Time | O(N) | Every node is visited once |
| Space | O(N) | Queue and result storage |

Where N represents the total number of nodes in the binary tree.

## 🎯 Key Concepts Learned

- Binary Tree Traversal
- Breadth First Search (BFS)
- Level Order Traversal
- Queue Data Structure
- Level-wise Average Calculation
- STL Queue in C++

## 🏆 Learning Outcome

Learned how to traverse a binary tree level by level using BFS and calculate the average value of nodes at each level using C++ and Python.

## 🔗 LeetCode

[Average of Levels in Binary Tree - LeetCode 637](https://leetcode.com/problems/average-of-levels-in-binary-tree/)

## 📁 Project Structure

```text
Day71/
│
├── Day71.cpp
├── Day71.py
└── README.md
```

## 🔥 365 Days of Code Challenge

**Day 71 Completed!**

Consistency, Practice, and Progress.

One Day Better Than Yesterday! 💻🚀
