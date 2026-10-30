# Day 70 — Search in a Binary Search Tree

## Problem
Given the root of a Binary Search Tree and an integer value, find the node containing that value and return the subtree rooted at that node. Return NULL if the value does not exist.

**LeetCode:** [700. Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/)

## Example

**Input:** `root = [4,2,7,1,3], val = 2`

**Output:** `[2,1,3]`

## Approach
Use the Binary Search Tree property.

1. Check whether the current node is NULL or contains the target.
2. If the target is smaller, search the left subtree.
3. If the target is greater, search the right subtree.
4. Return the matching node.

## Complexity
- **Time Complexity:** O(h)
- **Auxiliary Space:** O(h)

For a balanced BST, the time complexity is O(log n). In the worst case, it is O(n).

## Languages
- C++
- Python

## What I Learned
I learned how to search for a target value in a Binary Search Tree using recursion and the BST property. I also practised returning a complete subtree instead of just a node value.