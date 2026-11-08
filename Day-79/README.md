# Day 79 — Subtree of Another Tree

## Problem

Given the roots of two binary trees, determine whether `subRoot` is a subtree
of `root`. A subtree must match both the node values and the complete structure
of the matching tree.

## Example

```text
Root tree:          3
                   / \
                  4   5
                 / \
                1   2

Subtree:          4
                 / \
                1   2
```

**Output:** `true`

## Approach

At every node in the main tree, first check whether the tree rooted at that
node is exactly the same as `subRoot`. If it is not, recursively search the
left and right subtrees.

The `sameTree` helper compares two trees node by node, including their values
and null-child positions.

## Complexity

* Time Complexity: O(n * m)
* Space Complexity: O(h + k)

Where `n` and `h` are the number of nodes and height of the main tree, and `m`
and `k` are the number of nodes and height of the candidate subtree.

## Language

* C++
* Python

## What I Learned

* How to compare two binary trees recursively
* How to search for a complete subtree inside another tree
* Why both values and tree structure must match
* How helper functions make recursive tree solutions clearer

## LeetCode

[572 — Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree/)
