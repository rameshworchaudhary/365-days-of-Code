# Day 62 — Construct Binary Tree from Preorder and Inorder Traversal

## Problem
Given the preorder and inorder traversal arrays of a binary tree, construct and return the original binary tree.

**LeetCode:** [105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

## Example

**Input:**
- `preorder = [3,9,20,15,7]`
- `inorder = [9,3,15,20,7]`

**Output:** `[3,9,20,null,null,15,7]`

## Approach
- The first element of preorder represents the root node.
- Find the root's index in the inorder array using a hash map.
- Divide the inorder array into left and right subtree ranges.
- Recursively construct both subtrees and attach them to the root.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(n)

## Languages
- C++
- Python

## What I Learned
- The difference between preorder and inorder traversal.
- How to reconstruct a binary tree using two traversal arrays.
- How recursion divides a problem into smaller subproblems.
- How a hash map improves lookup efficiency.
