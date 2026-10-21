# Day 60 — Kth Smallest Element in a BST

## Problem
Given the root of a Binary Search Tree (BST) and an integer `k`, return the kth smallest value in the tree. Counting starts from 1.

**LeetCode:** [230. Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)

## Example

**Input:** `root = [3,1,4,null,2], k = 1`

**Output:** `1`

## Approach
- Perform an iterative inorder traversal using a stack.
- Visit the left subtree first, then the current node, and finally the right subtree.
- Decrease `k` after visiting each node.
- Return the current node's value when `k` becomes zero.

## Complexity
- **Time:** O(n) in the worst case.
- **Auxiliary Space:** O(h), where h is the height of the tree.

## Languages
- C++
- Python

## What I Learned
- How inorder traversal produces sorted values in a BST.
- How to use a stack for iterative tree traversal.
- How to find the kth smallest element without sorting the values separately.
