# Day 80 — Lowest Common Ancestor of a Binary Search Tree

## Problem

Given the root of a Binary Search Tree (BST) and two nodes, find their lowest
common ancestor. The lowest common ancestor is the deepest node that has both
given nodes in its subtree.

## Example

```text
        6
       / \
      2   8
     / \ / \
    0  4 7  9
      / \
     3   5

First node: 2
Second node: 8
Output: 6
```

## Approach

Use the BST property:

* If both nodes are smaller than the current node, search the left subtree.
* If both nodes are greater than the current node, search the right subtree.
* Otherwise, the current node is the lowest common ancestor.

## Complexity

* Time Complexity: O(h)
* Space Complexity: O(h)

Here, `h` is the height of the BST. The space complexity comes from the
recursive call stack.

## Language

* C++
* Python

## What I Learned

* How to use BST ordering to avoid searching every node
* How to identify the split point between two nodes
* Why the first node where paths diverge is the lowest common ancestor

## LeetCode

[235 — Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/)
