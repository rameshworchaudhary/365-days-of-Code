# Day 82 — Binary Tree Right Side View

## Problem

Given the root of a binary tree, imagine standing on its right side and
return the values of the nodes visible from top to bottom.

## Example

```text
      1
     / \
    2   3
     \   \
      5   4

Output: [1, 3, 4]
```

## Approach

Use breadth-first search with a queue. At each level, process all nodes and
store the value of the last node in that level because it is the rightmost
visible node.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

Here, `n` is the number of nodes in the tree.

## Language

* C++
* Python

## What I Learned

* How level order traversal can solve visibility problems
* Why the last node of each level is visible from the right side
* How to reuse breadth-first search with a small change

## LeetCode

[199 — Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/)
