# Day 74 — Validate Binary Search Tree

## Problem

Given the root of a binary tree, determine whether it is a valid Binary Search Tree (BST).

A valid BST must satisfy these rules:

* Every value in the left subtree is smaller than the node value.
* Every value in the right subtree is greater than the node value.
* Both subtrees must also be valid BSTs.

## Example

**Input:**

```text
        2
       / \
      1   3
```

**Output:**

```text
true
```

## Approach

I used recursion with a valid range for every node.

The root can contain any integer value, so its initial range is negative infinity to
positive infinity. For each node, I check whether its value is inside the allowed
range. Then I recursively validate the left subtree with an updated upper bound and
the right subtree with an updated lower bound.

This range-based approach correctly handles invalid values deep inside a subtree,
not only direct children.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Where `n` is the number of nodes and `h` is the height of the tree.

## Language

* C++
* Python

## What I Learned

* How to validate a Binary Search Tree
* How recursion can carry constraints through a tree
* Why checking only direct child nodes is not enough
* How to use lower and upper bounds for tree validation
* How to analyze time and space complexity

## LeetCode

[98 — Validate Binary Search Tree](https://leetcode.com/problems/validate-binary-search-tree/)
