# Day 90 - Serialize and Deserialize Binary Tree

## Problem

Design an algorithm to serialize a binary tree into a string and deserialize
the string back into the original tree structure.

## Example

```text
Input:       1
            / \
           2   3
              / \
             4   5

Serialized: 1,2,#,#,3,4,#,#,5,#,#,
```

## Approach

Use preorder traversal. Serialize every node value followed by a comma, and
use `#` to represent a null child. During deserialization, read tokens from
left to right and recursively construct the left subtree before the right
subtree.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(n)

## Language

* C++

## What I Learned

* How preorder traversal can preserve a binary tree's structure
* Why explicit null markers are necessary to reconstruct missing children
* How a shared token index converts a serialized sequence back into a tree

## LeetCode

[297 - Serialize and Deserialize Binary Tree](https://leetcode.com/problems/serialize-and-deserialize-binary-tree/)
