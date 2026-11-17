# Day 88 — Binary Tree Maximum Path Sum

## Problem

Given the root of a binary tree, return the maximum path sum. A path may
start and end at any nodes, but it must follow parent-child connections and
cannot visit a node more than once.

## Example

```text
       -10
       /  \
      9   20
         /  \
        15   7

Output: 42
```

The maximum path is `15 -> 20 -> 7`.

## Approach

For each node, calculate the greatest sum of a path that starts at that node
and continues through at most one child. Negative child contributions are
discarded because they would reduce the sum. A path passing through the
current node may include both child contributions, so update the global
maximum with that value before returning the best one-sided path to the
parent.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

The recursion stack uses space proportional to the tree height.

## Language

* C++
* Python

## What I Learned

* How a one-sided path differs from a path passing through a node
* Why negative subtree contributions should be ignored
* How post-order traversal supports bottom-up tree dynamic programming

## LeetCode

[124 — Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum/)
