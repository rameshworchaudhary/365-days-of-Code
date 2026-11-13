# Day 83 — Binary Tree Zigzag Level Order Traversal

## Problem

Given the root of a binary tree, return the level order traversal of its
nodes' values, alternating between left-to-right and right-to-left order.

## Example

```text
      3
     / \
    9  20
       / \
      15  7

Output: [[3], [20, 9], [15, 7]]
```

## Approach

Use breadth-first search with a queue. For each level, collect the node values
and reverse the level when the traversal direction is right-to-left.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

Here, `n` is the number of nodes in the tree.

## Language

* C++
* Python

## What I Learned

* How to alternate traversal direction at each tree level
* How breadth-first search separates nodes by level
* How to preserve linear time while changing output order

## LeetCode

[103 — Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/)
