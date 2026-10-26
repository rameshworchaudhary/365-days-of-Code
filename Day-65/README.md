# Day 65 — Binary Tree Inorder Traversal

## Problem
Given the root of a binary tree, return the inorder traversal of its node values.

Inorder traversal follows this order:
1. Visit the left subtree.
2. Visit the current node.
3. Visit the right subtree.

**LeetCode:** [94. Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/)

## Example

**Input:** `root = [1,null,2,3]`

**Output:** `[1,3,2]`

## Approach
- **Recursive:** Visit the left subtree, add the current node value, and then visit the right subtree.
- **Iterative:** Use a stack to store nodes while moving left. Pop and process each node, then move to its right child.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree. Worst case: O(n).

## Languages
- C++
- Python

## What I Learned
- How inorder traversal works.
- How to traverse a binary tree using recursion.
- How to simulate recursive traversal using a stack.
- How to analyze time and auxiliary space complexity.
