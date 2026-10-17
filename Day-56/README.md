# Day 56 — Count Good Nodes in a Binary Tree

## Problem
Given the root of a binary tree, count the good nodes. A node is good if no node on the path from the root to that node has a value greater than it.

**LeetCode:** [1448. Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)

## Example
**Input:** `root = [3,1,4,3,null,1,5]`

**Output:** `4`

## Approach
- Use Depth-First Search (DFS) to traverse the binary tree.
- Maintain the maximum value encountered on the path from the root.
- Count the current node if its value is greater than or equal to that maximum.
- Update the maximum and recursively process the left and right subtrees.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree.

## Languages
- C++
- Python

## What I Learned
- How to traverse a binary tree using DFS.
- How to pass information from parent nodes to child nodes.
- How to track the maximum value along a tree path.
