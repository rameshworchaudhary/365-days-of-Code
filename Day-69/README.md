# Day 69 — Sum of Left Leaves

## Problem
Given the root of a binary tree, return the sum of all left leaves.

A leaf is a node with no children. A left leaf is a leaf that is the left child of another node.

**LeetCode:** [404. Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves/)

## Example

**Input:** `root = [3, 9, 20, null, null, 15, 7]`

**Output:** `24`

**Explanation:** The left leaves are 9 and 15. Their sum is 24.

## Approach
Use Depth-First Search (DFS) and recursion.

1. Check whether the left child exists.
2. If the left child is a leaf, add its value.
3. Otherwise, recursively explore the left subtree.
4. Recursively explore the right subtree.
5. Return the total sum.

## Complexity
- **Time Complexity:** O(n)
- **Auxiliary Space:** O(h), where h is the height of the tree.

## Languages
- C++
- Python

## What I Learned
I learned how to identify left leaf nodes in a binary tree and calculate their sum using recursion and DFS.