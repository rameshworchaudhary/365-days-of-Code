# Day 72 — Lowest Common Ancestor of a BST

## Problem
Given a Binary Search Tree and two nodes p and q, find their Lowest Common Ancestor (LCA).

**LeetCode:** [235. Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)

## Example

**Input:** `root = [6,2,8,0,4,7,9,null,null,3,5]`

`p = 2, q = 8`

**Output:** `6`

## Approach
Use the Binary Search Tree property.

1. If both nodes are smaller than the current root, move left.
2. If both nodes are greater than the current root, move right.
3. Otherwise, the current root is the Lowest Common Ancestor.

## Complexity
- **Time Complexity:** O(h)
- **Auxiliary Space:** O(h) for recursive calls.

For a balanced BST, O(log n) time. In the worst case, O(n).

## Languages
- C++
- Python

## What I Learned
I learned how to find the Lowest Common Ancestor of two nodes in a Binary Search Tree using recursion and BST properties.