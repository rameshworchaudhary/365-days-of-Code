# Day 77 — Balanced Binary Tree

## Problem

Given the root of a binary tree, determine whether it is height-balanced.

A binary tree is height-balanced when the difference between the heights of the
left and right subtrees of every node is at most `1`.

## Example

```text
    3
   / \
  9  20
     / \
    15  7
```

**Output:** `true`

## Approach

For every node, calculate the heights of both subtrees using postorder
recursion. If any subtree is already unbalanced, return `-1` immediately.
Otherwise, return the current height and check whether the height difference
is at most `1`.

This avoids recalculating subtree heights.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Where `n` is the number of nodes and `h` is the height of the tree.

## Language

* C++

## What I Learned

* How to check whether a binary tree is height-balanced
* How postorder recursion can return useful information
* How a sentinel value can stop unnecessary traversal
* How to avoid repeated height calculations

## LeetCode

[110 — Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree/)
