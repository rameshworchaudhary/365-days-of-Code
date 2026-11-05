# Day 76 — Maximum Depth of Binary Tree

## Problem

Given the root of a binary tree, return its maximum depth.

The maximum depth is the number of nodes along the longest path from the root
node down to the farthest leaf node.

## Example

```text
    3
   / \
  9  20
     / \
    15  7
```

**Output:** `3`

## Approach

For each node, recursively find the depth of its left and right subtrees. The
depth of the current node is one more than the larger subtree depth.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Where `n` is the number of nodes and `h` is the height of the tree.

## Language

* C++
* Python

## What I Learned

* How to calculate the maximum depth of a binary tree
* How recursion can solve tree traversal problems
* How to compare the depths of two subtrees

## LeetCode

[104 — Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
