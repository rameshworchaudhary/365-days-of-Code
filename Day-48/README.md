# Day 48 — Maximum Depth of Binary Tree

## Problem

Find the maximum depth of a binary tree, defined as the number of nodes along the longest path from the root to a leaf.

**LeetCode:** [104. Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree/)

## Example

**Input**

```text
root = [3,9,20,null,null,15,7]
```

**Output**

```text
3
```

## Approach

* Use recursion to calculate the depth of the left and right subtrees.
* Return `0` when the current node is null.
* Return `1 + max(leftDepth, rightDepth)` for each non-null node.

## Complexity

* **Time:** O(n), where n is the number of nodes.
* **Space:** O(h) for the recursion stack, where h is the tree height.

## Languages

* C++
* Python

## What I Learned

* Binary tree recursion
* Depth-First Search (DFS)
* Calculating tree height using recursive calls
