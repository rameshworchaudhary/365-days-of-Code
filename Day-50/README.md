# Day 50 — Invert Binary Tree

## Problem

Given the root of a binary tree, invert the tree by swapping the left and right children of every node.

**LeetCode:** [226. Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree/)

## Example

**Input**

```text
root = [4,2,7,1,3,6,9]
```

**Output**

```text
[4,7,2,9,6,3,1]
```

## Approach

* Use recursion to visit each node.
* Swap its left and right children.
* Recursively invert both subtrees.
* Return the root of the inverted tree.

## Complexity

* **Time:** O(n), where n is the number of nodes.
* **Space:** O(h) for the recursive call stack, where h is the tree height. Worst case: O(n).

## Languages

* C++
* Python

## What I Learned

* Binary tree recursion
* Swapping left and right child nodes
* Depth-First Search (DFS)
