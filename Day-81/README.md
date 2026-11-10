# Day 81 — Binary Tree Level Order Traversal

## Problem

Given the root of a binary tree, return the values of its nodes level by
level, from left to right.

## Example

```text
      3
     / \
    9  20
       / \
      15  7

Output: [[3], [9, 20], [15, 7]]
```

## Approach

Use breadth-first search with a queue. At the beginning of each iteration,
store the current queue size so that exactly one tree level is processed.
Then add each node's children to the queue for the next level.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

Here, `n` is the number of nodes in the tree.

## Language

* C++
* Python

## What I Learned

* How to traverse a binary tree level by level
* How a queue supports breadth-first search
* How to separate nodes belonging to different levels

## LeetCode

[102 — Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/)
