# Day 85 — Validate Binary Search Tree

## Problem

Given the root of a binary tree, determine whether it is a valid binary
search tree. Every value in the left subtree must be smaller than the node's
value, and every value in the right subtree must be greater.

## Example

```text
      2
     / \
    1   3

Output: true
```

## Approach

Use depth-first search with an allowed range for every node. The root can have
any value, while a left child must be smaller than its ancestor's value and a
right child must be greater. Pass the updated range to each subtree and reject
any value outside its bounds.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Here, `n` is the number of nodes and `h` is the height of the tree. The space
complexity comes from the recursive call stack.

## Language

* C++
* Python

## What I Learned

* How BST ordering applies to every descendant, not only direct children
* How range constraints validate a tree in one traversal
* Why strict bounds are needed to reject duplicate values

## LeetCode

[98 — Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
