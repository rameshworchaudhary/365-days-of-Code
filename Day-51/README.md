# Day 51 — Symmetric Tree

## Problem

Given the root of a binary tree, check whether it is symmetric around its center.

**LeetCode:** [101. Symmetric Tree](https://leetcode.com/problems/symmetric-tree/)

## Example

**Input**

```text
root = [1,2,2,3,4,4,3]
```

**Output**

```text
true
```

## Approach

* Compare the left and right subtrees recursively.
* Check whether corresponding mirror nodes have equal values.
* Compare the left child of one subtree with the right child of the other.
* Return `true` if both sides are mirror images.

## Complexity

* **Time:** O(n), where n is the number of nodes.
* **Space:** O(h) for the recursion stack, where h is the tree height. Worst case: O(n).

## Languages

* C++
* Python

## What I Learned

* Binary tree recursion
* Mirror-image comparison
* Base cases in recursive functions
