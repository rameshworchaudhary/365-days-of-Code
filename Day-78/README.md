# Day 78 — Diameter of Binary Tree

## Problem

Given the root of a binary tree, return the length of its diameter.

The diameter is the longest path between any two nodes. The path does not
necessarily pass through the root, and its length is measured in edges.

## Example

```text
      1
     / \
    2   3
   / \
  4   5
```

**Output:** `3`

## Approach

For every node, recursively calculate the height of its left and right
subtrees. A path passing through that node has length
`leftHeight + rightHeight`.

While returning the height to the parent, update the maximum diameter found so
far. This postorder approach visits each node only once.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Where `n` is the number of nodes and `h` is the height of the tree.

## Language

* C++
* Python

## What I Learned

* How to calculate a tree's diameter using subtree heights
* How postorder recursion can return height and update a global answer
* Why the longest path does not always pass through the root
* How to measure a binary-tree path in edges

## LeetCode

[543 — Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree/)
