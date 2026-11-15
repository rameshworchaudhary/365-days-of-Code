# Day 86 — Kth Smallest Element in a BST

## Problem

Given the root of a binary search tree and an integer `k`, return the `k`th
smallest value in the tree.

## Example

```text
      3
     / \
    1   4
     \
      2

k = 1
Output: 1
```

## Approach

An in-order traversal of a binary search tree visits values in ascending
order. Traverse the left subtree, process the current node, and then traverse
the right subtree while decreasing `k`. The value where `k` reaches zero is
the answer.

## Complexity

* Time Complexity: O(h + k)
* Space Complexity: O(h)

Here, `h` is the height of the tree. The stack stores at most one path from
the root to a leaf.

## Language

* C++
* Python

## What I Learned

* Why in-order traversal produces sorted values in a BST
* How to stop a traversal as soon as the kth value is found
* How an explicit stack can perform in-order traversal iteratively

## LeetCode

[230 — Kth Smallest Element in a BST](https://leetcode.com/problems/kth-smallest-element-in-a-bst/)
