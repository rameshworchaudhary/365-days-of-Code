# Day 61 — Maximum Difference Between Node and Ancestor

## Problem
Given the root of a binary tree, find the maximum absolute difference between the value of a node and the value of one of its descendants, where the node must be an ancestor of that descendant.

**LeetCode:** [1026. Maximum Difference Between Node and Ancestor](https://leetcode.com/problems/maximum-difference-between-node-and-ancestor/)

## Example

**Input:** `root = [8,3,10,1,6,null,14,null,null,4,7,13]`

**Output:** `7`

**Explanation:** The difference between ancestor `8` and descendant `1` is `|8 - 1| = 7`, which is the maximum.

## Approach
- Use Depth-First Search (DFS) to traverse the tree.
- Track the minimum and maximum values along each root-to-node path.
- At the end of each path, calculate the difference between the maximum and minimum values.
- Return the maximum difference across all paths.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree.

## Languages
- C++
- Python

## What I Learned
- How to use DFS for binary tree problems.
- How to track minimum and maximum values along a path.
- How ancestor-descendant relationships affect the solution.
- How to solve a tree problem in linear time.
