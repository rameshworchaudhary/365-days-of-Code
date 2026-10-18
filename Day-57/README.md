# Day 57 — Binary Tree Right Side View

## Problem
Given the root of a binary tree, return the values of the nodes visible when viewing the tree from the right side, ordered from top to bottom.

**LeetCode:** [199. Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)

## Example
**Input:** `root = [1,2,3,null,5,null,4]`

**Output:** `[1,3,4]`

## Approach
- Use Breadth-First Search (BFS) to traverse the tree level by level.
- Calculate how many nodes are present at each level.
- Add the last node of each level to the result.
- Return the result after processing all levels.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(n), for the queue and result.

## Languages
- C++
- Python

## What I Learned
- How to perform level-order traversal using a queue.
- How to identify the rightmost node at each level.
- How to solve binary tree problems using BFS.
