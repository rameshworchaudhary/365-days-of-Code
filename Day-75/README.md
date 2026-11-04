# Day 75 — Symmetric Tree

## Problem

Given the root of a binary tree, determine whether the tree is symmetric around
its center.

## Example

**Input:**

```text
        1
       / \
      2   2
     / \ / \
    3  4 4  3
```

**Output:**

```text
true
```

## Approach

I used recursion to compare the left and right subtrees as mirror images.

Two nodes are mirrors when their values are equal, the left child of one node
matches the right child of the other node, and the right child matches the left
child. The tree is symmetric when the root's left and right subtrees are
mirrors.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Where `n` is the number of nodes and `h` is the height of the tree.

## Language

* C++
* Python

## What I Learned

* How to check whether a binary tree is symmetric
* How to compare two subtrees as mirror images
* How recursion works on pairs of tree nodes
* How to analyze time and space complexity

## LeetCode

[101 — Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)
