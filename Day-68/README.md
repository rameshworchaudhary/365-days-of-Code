# Day 69 — Binary Tree Paths

## Problem
Given the root of a binary tree, return all root-to-leaf paths in any order.

**LeetCode:** [Binary Tree Paths — Problem 257](https://leetcode.com/problems/binary-tree-paths/)

## Example

**Input:** `root = [1, 2, 3]`

**Output:** `["1->2", "1->3"]`

## Approach
Use Depth-First Search (DFS) to explore the binary tree.

1. Add the current node's value to the path.
2. If the node is a leaf, save the complete path.
3. Otherwise, recursively explore the left and right children.
4. Continue until all root-to-leaf paths have been found.

## Complexity
- **Time Complexity:** O(n²) in the worst case when building path strings.
- **Auxiliary Space:** O(h) recursion stack, excluding output storage.

## Languages
- C++
- Python

## What I Learned
I learned how to use DFS to find all root-to-leaf paths in a binary tree. I also practised recursion and converting node values into path strings.