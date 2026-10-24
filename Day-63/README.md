# Day 63 — Construct Binary Tree from Inorder and Postorder Traversal

## Problem
Given the inorder and postorder traversal arrays of a binary tree, construct and return the original binary tree.

**LeetCode:** [106. Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)

## Example

**Input:**
- `inorder = [9,3,15,20,7]`
- `postorder = [9,15,7,20,3]`

**Output:** `[3,9,20,null,null,15,7]`

## Approach
- The last element of postorder represents the root node.
- Find the root's position in the inorder array using a hash map.
- Build the right subtree first, followed by the left subtree.
- Use recursion to construct the complete binary tree.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(n)

## Languages
- C++
- Python

## What I Learned
- How inorder and postorder traversals work.
- How to reconstruct a binary tree from traversal arrays.
- Why the right subtree is built first when processing postorder backwards.
- How hash maps improve lookup efficiency.
