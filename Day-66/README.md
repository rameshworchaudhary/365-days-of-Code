# Day 67 — Binary Tree Preorder Traversal

## Problem
Given the root of a binary tree, return the preorder traversal of its nodes' values.

**LeetCode:** [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/)

## Example

**Input:** `root = [1, null, 2, 3]`

**Output:** `[1, 2, 3]`

## Approach
Preorder traversal follows the Root → Left → Right order.

1. Visit the current node.
2. Traverse the left subtree.
3. Traverse the right subtree.

The recursive function stops when the current node is `NULL` or `None`.

## Complexity
- **Time Complexity:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree.

## Languages
- C++
- Python

## What I Learned
I learned how preorder traversal visits the root before its left and right subtrees. I also practised implementing the same logic in C++ and Python and submitting solutions on LeetCode.