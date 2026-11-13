# Day 83 — Count Good Nodes in Binary Tree

## Problem

Given the root of a binary tree, count the number of nodes that are good.
A node is good if no node on the path from the root to it has a value greater
than its own value.

## Example

```text
        3
       / \
      1   4
     /   / \
    3   1   5

Output: 4
```

The good nodes are `3` (the root), `4`, `3`, and `5`.

## Approach

Use depth-first search while carrying the maximum value seen on the current
path. A node is good when its value is at least that maximum. Update the
maximum before visiting its children and add the counts returned by both
subtrees.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Here, `n` is the number of nodes and `h` is the height of the tree. The space
complexity comes from the recursive call stack.

## Language

* C++
* Python

## What I Learned

* How to carry path-specific state through a tree traversal
* How to identify nodes using the maximum value seen so far
* Why each tree node only needs to be visited once

## LeetCode

[1448 — Count Good Nodes in Binary Tree](https://leetcode.com/problems/count-good-nodes-in-binary-tree/)
