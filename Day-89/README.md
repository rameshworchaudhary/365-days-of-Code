# Day 89 — House Robber III

## Problem

Given the root of a binary tree, determine the maximum amount of money that
can be robbed without robbing two directly connected houses on the same night.

Each tree node represents a house, and its children are directly connected
houses that cannot be robbed when the current house is robbed.

## Example

```text
       3
      / \
     2   3
      \   \
       3   1

Output: 7
```

The best choice is to rob `3 + 3 + 1`.

## Approach

For every node, return two values:

* The maximum amount when the current house is not robbed
* The maximum amount when the current house is robbed

If the current house is robbed, neither child can be robbed. If it is skipped,
each child may either be robbed or skipped, so the better option is selected
independently for both children.

## Complexity

* Time Complexity: O(n)
* Space Complexity: O(h)

Each node is visited once, and the recursion stack uses space proportional to
the tree height.

## Language

* C++

## What I Learned

* How to represent mutually exclusive choices with tree dynamic programming
* Why each subtree should return both "rob" and "skip" states
* How post-order traversal combines optimal results from child subtrees

## LeetCode

[337 — House Robber III](https://leetcode.com/problems/house-robber-iii/)
