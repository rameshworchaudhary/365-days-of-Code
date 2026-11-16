# Day 87 — Construct Binary Tree from Preorder and Inorder Traversal

## Problem

Given the preorder and inorder traversals of a binary tree, construct and
return the original binary tree.

## Example

```text
Preorder: [3, 9, 20, 15, 7]
Inorder:  [9, 3, 15, 20, 7]

Output:
        3
       / \
      9   20
         /  \
        15   7
```

## Approach

The first value in preorder is the root of the current tree. Find that value
in inorder to divide the remaining values into the left and right subtrees.
Use a map for constant-time inorder lookups and recursively build both
subtrees from their corresponding ranges.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

The map, recursion stack, and constructed tree use linear space.

## Language

* C++
* Python

## What I Learned

* How preorder traversal identifies the root of each subtree
* How inorder traversal separates left and right subtrees
* How index ranges can reconstruct a tree recursively
* Why storing inorder positions avoids repeated linear searches

## LeetCode

[105 — Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)
