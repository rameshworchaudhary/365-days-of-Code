# Day 52 — Path Sum

## Problem

Given the root of a binary tree and an integer `targetSum`, check whether a root-to-leaf path exists whose node values add up to the target sum.

**LeetCode:** [112. Path Sum](https://leetcode.com/problems/path-sum/)

## Example

**Input**

```text
root = [5,4,8,11,null,13,4,7,2,null,null,null,1]
targetSum = 22
```

**Output**

```text
true
```

**Explanation:** The path `5 → 4 → 11 → 2` has a sum of `22`.

## Approach

* Return `false` if the current node is null.
* At a leaf node, check whether its value equals the remaining target sum.
* Subtract the current node's value from the target.
* Recursively check the left and right subtrees.
* Return `true` if either subtree contains a valid path.

## Complexity

* **Time:** O(n), where n is the number of nodes.
* **Space:** O(h) for the recursion stack, where h is the tree height. Worst case: O(n).

## Languages

* C++
* Python

## What I Learned

* Binary tree recursion
* Depth-First Search (DFS)
* Root-to-leaf path traversal
* Finding a target sum without storing every path
