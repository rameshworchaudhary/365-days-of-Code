# Day 64 — Binary Tree Maximum Path Sum

## Problem
Given the root of a binary tree, return the maximum path sum of any non-empty path. The path does not need to pass through the root.

**LeetCode:** [124. Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)

## Example

**Input:** `root = [-10,9,20,null,null,15,7]`

**Output:** `42`

**Explanation:** The maximum-sum path is `15 → 20 → 7`.

Sum = `15 + 20 + 7 = 42`.

## Approach
- Use Depth-First Search (DFS) to calculate the maximum downward path sum for each node.
- Ignore negative subtree contributions by taking the maximum with zero.
- At every node, calculate the path sum using both left and right subtrees.
- Update the global maximum path sum.
- Return only the best single-branch path sum to the parent.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree. Worst case: O(n).

## Languages
- C++
- Python

## What I Learned
- How to solve binary tree problems using postorder DFS.
- How to calculate maximum path sums recursively.
- Why negative subtree contributions can be ignored.
- The difference between a complete path through a node and a downward path returned to its parent.
