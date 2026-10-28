# Day 67 — Binary Tree Postorder Traversal

## Problem
Given the root of a binary tree, return the postorder traversal of its nodes' values.

**LeetCode:** [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/)

## Example

**Input:** `root = [1, 2, 3]`

**Output:** `[2, 3, 1]`

## Approach
Postorder traversal follows the Left → Right → Root order.

1. Traverse the left subtree.
2. Traverse the right subtree.
3. Add the current node's value to the result.

The recursive function stops when the current node is `NULL` or `None`.

## Complexity
- **Time Complexity:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree.

## Languages
- C++
- Python

## What I Learned
I learned how postorder traversal visits the left subtree and right subtree before the root node. I also practised implementing recursive tree traversal in C++ and Python.