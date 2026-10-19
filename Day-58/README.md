# Day 58 — Validate Binary Search Tree

## Problem
Given the root of a binary tree, determine whether it is a valid Binary Search Tree (BST).

A valid BST follows these rules:
- Every value in the left subtree is strictly smaller than the current node.
- Every value in the right subtree is strictly greater than the current node.
- Both subtrees must also satisfy the BST rules.

**LeetCode:** [98. Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)

## Example

**Input:** `root = [2,1,3]`

**Output:** `true`

## Approach
- Use recursion to validate each node.
- Maintain a minimum and maximum allowed value for every node.
- Update the allowed range when moving to the left or right child.
- Return `false` if any node violates its range; otherwise, return `true`.

## Complexity
- **Time:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree. Worst case: O(n).

## Languages
- C++
- Python

## What I Learned
- Binary Search Tree properties.
- Recursive tree validation.
- Maintaining value ranges during DFS.
- Why checking only a node's immediate children is insufficient.
